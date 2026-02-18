// arr = {7,6,-5,4,-3,-2}. Here in this array positive value will come first and negative value at last. Output=[7,6,4,-5,-3,-2]
#include<iostream>
using namespace std;
int main(){
  int nums[6] = {7,6,-5,4,-3,-2};
int n = 6;

int left = 0;

for(int i = 0; i < n; i++) {
    if(nums[i] > 0) {
        swap(nums[i], nums[left]);
        left++;
    }
}

for(int i = 0; i < n; i++)
    cout << nums[i] << " ";

  
  return 0;
}
