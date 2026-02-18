// reverse an array using Recursion
#include<iostream>
#include<vector>
using namespace std;

void reverseArray(int array[], int n, vector<int> &result){
    if (n==0)
     return;
    result.push_back(array[n-1]);
    reverseArray(array,n-1,result);
} 
int main(){
  int array [] = {1,2,3,4,5,6,7,8,9};
  int n = 9;
  vector<int> result;
  reverseArray(array,n,result);
  
  for(int val : result){
    cout<<val<<" ";
  }
  return 0;
}