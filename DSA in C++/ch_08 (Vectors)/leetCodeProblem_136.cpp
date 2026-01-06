// single number problem
#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>vec){
    int ans=0;
    for(int val:vec){
        ans = ans ^ val; // xor bitwise operator n^0 = n & n^n = 0
    }
    return ans;
}
int main(){
  vector <int> nums={4,1,2,1,2};
  cout<<singleNumber(nums); // output will be 4
  return 0;
}