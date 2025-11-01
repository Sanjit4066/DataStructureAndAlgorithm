// array pointer
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    // arr is a constant pointer. We can't store others address in arr pointer
    cout<<arr<<endl; //address of 0th index
    cout<<*arr; // 1
  return 0;
}