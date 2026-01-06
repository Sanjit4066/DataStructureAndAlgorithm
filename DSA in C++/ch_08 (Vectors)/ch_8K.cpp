// linear search in vectors
#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector<int>& nums, int target){
    int size= nums.size();
    int idx=-1;
    for (int i = 0; i < size; i++)
    {
        if (target==nums[i])
        {
            
            idx=i;
            break;
        }
        
    }
   
    return idx; // return index of element or -1 if element not found
}
int main(){
  vector<int>vec={1,22,5,11,7,8};
  cout<<linearSearch(vec, 38);
  return 0;
}