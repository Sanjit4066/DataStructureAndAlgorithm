#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>& arr, int n, int m, int maxAllowedTime){ //TimeComplexity -> O(n)
    int painters=1, pages=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] >maxAllowedTime){
            return false;
        }
        if(pages+arr[i] <=maxAllowedTime){
            pages += arr[i];
        }
        else{
            painters++;
            pages = arr[i];
        }
    }
    return painters > m ? false : true ;
    
}
int allocatedTime(vector<int>& arr, int n, int m){  //Overall TimeComplexity->)(n*logN)
    if (m > n)
    {
        return -1;
    }
    
    int sum = 0;
    for (int i = 0; i < n ; i++) //O(n)
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
  vector<int> arr = {40,30,10,20};
  int n=4, m=2;

  cout<< "Possible Min time:"<<allocatedTime(arr, n, m) <<endl;
  return 0;
}
