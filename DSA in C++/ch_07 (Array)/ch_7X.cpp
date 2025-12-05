// here I will find element which appear once in a sorted array in which every element appear twice except that one element.
// linear search. Time complecity -> O(n)
#include<iostream>
#include<vector>
using namespace std;
int findElement(vector<int>& arr){
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == arr[i+1])
        {
            i+=1;
        }
        else{
            return arr[i];
        }
        
    }
    return -1;
    
}
int main(){
  vector<int>nums = {2,2,3,3,4,4,5,6,6,7,7};
  cout<<"Element appear once is:"<<findElement(nums);
  return 0;
}