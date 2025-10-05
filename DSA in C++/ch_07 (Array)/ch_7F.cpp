// concept of linear search
#include<iostream>
using namespace std;
int main(){
    int arr[]={23,34,56,28,97}; //target value is 28
    int size=5;
    int idx=-1;
    int targetValue=28;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i]==targetValue)
        {
            idx=i;
            
            break;
        }
       
       
       }
       if(idx!=-1){
     cout<<"element found at index:"<<idx;
       }
       
    else{
        cout<<"element not found";
    }
    
  return 0;
}