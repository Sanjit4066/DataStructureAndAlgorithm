// pointers arithematic (inceremt++/decrement--)
#include<iostream>
using namespace std;
int main(){
    int a = 20; // integer typr (size 4 byte)
    int *ptr = &a; 
    cout<<ptr<<endl; //0x3a8b1ff984 (hexadecimal value)
    ptr++;           
    cout<<ptr<<endl; //0x3a8b1ff98c
    ptr--;           
    cout<<ptr<<endl; //0x3a8b1ff984
  return 0;
}