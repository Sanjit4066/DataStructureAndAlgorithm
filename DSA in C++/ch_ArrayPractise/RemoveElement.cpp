#include<iostream>
using namespace std;
void removeElement(int array[], int size, int target){
    int idx = -1;
    for(int i = 0; i<size; i++){ //finding index of target element
        if(array[i] == target){
            idx = i;
        }
    }
    if (idx == -1){
        cout<<"target element not found";
    }
    else{
        for (int i = idx ; i < size-1; i++){ // shifting element 
        {
            array[i] = array[i+1];
        }
        
    }
    for (int i = 0; i < size -1; i++) //printing array
    {
        cout<<array[i]<<" ";
    }
    
}

    
}
int main(){
  int array [] = {2,3,4,5,6,7,8,9,10,12,13};
  int target = 5;
  int size = sizeof(array) / sizeof(array[0]);
  removeElement(array, size ,target);
  return 0;
}