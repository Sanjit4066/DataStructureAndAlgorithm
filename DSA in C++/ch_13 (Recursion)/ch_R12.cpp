// here i will print the subset of a given array recursively.
// every element has to choice whether they can be part of subset or not.
#include<iostream>
#include<vector>
using namespace std;
void printSubset(vector<int> &arr, vector<int> &ans,int i){  //passing value by reference
    //base case
    if(i == arr.size()){  
        for(int val : ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    //inclusion choice
    ans.push_back(arr[i]);   
    printSubset(arr,ans,i+1); 

    ans.pop_back();  //backtrack       
    
    // exclusion choice 
    printSubset(arr,ans,i+1);

}
int main(){
  vector<int>num={1,2,3,4};
  int i=0;
  vector<int>ans;
  printSubset(num,ans,i);
  return 0;
}