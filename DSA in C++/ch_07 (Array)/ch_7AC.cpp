// arr = {7,6,-5,4,-3,-2}. Here in this array positive value will come at even and negative value at odd. Output=[7,-5,6,-3,4,-2]
#include<iostream>
using namespace std;
int main(){
  int nums [6] = {-7,-6,5,4,3,-2};
  int result [6];
  int ps = 0;
  int ns = 1;
  for (int i = 0; i < 6; i++)
  {
    if (nums[i]>0)
    {
        result[ps]=nums[i];
        ps+=2;
    }
    else{
        result[ns]=nums[i];
        ns+=2;
    }
    
  }
  for(int val : result){
    cout<<val<<" ";
  }
  
  return 0;
}