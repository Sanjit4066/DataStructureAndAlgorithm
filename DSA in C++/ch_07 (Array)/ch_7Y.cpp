/*here I'm doing a very classic problem of  Book allocation
arr =[2,1,3,4] N=4(Number of Books) M=2(Number of Students)
here we have to find possible Min Max pages.
 arr={2,1,3,4}
 S1=2 S2=8 Max-8
 S1=3 S2=7 Max-7
 S1=6 S2=4 Max-6
 set of Max pages{8,7,6} return 6 from it
 Constraints-->
 ->Each Book should be allocated to a Student.
 ->Each Student should have at least one book.
 ->Allotment should be in conatgious Manner.
*/ 
#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>& arr, int n, int m, int maxAllowedPages){ //TimeComplexity -> O(n)
    int students=1, pages=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > maxAllowedPages){
            return false;
        }
        if(pages+arr[i] <= maxAllowedPages){
            pages += arr[i];
        }
        else{
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false : true ;
    
}
int allocateBooks(vector<int>& arr, int n, int m){  //Overall TimeComplexity->)(n*logN)
    if (m > n)
    {
        return -1;
    }
    
    int sum = 0;
    for (int i = 0; i <n ; i++) //O(n)
    {
        sum += arr[i];
    }
    int ans = -1;
    int st=0, end=sum; //range of possible ans
    while (st<=end) //O(log n)
    {
        int mid = st + (end - st)/2;
        if(isValid(arr, n, m, mid)){ // left 
            ans = mid;
            end=mid-1;
        } else{
            st = mid+1;
        }
    
    }
   return ans; 
}
int main(){
  vector<int> arr = {2,1,3,4};
  int n=4, m=2;

  cout<< "Possible Min Max Pages:"<<allocateBooks(arr, n, m) <<endl;
  return 0;
}
