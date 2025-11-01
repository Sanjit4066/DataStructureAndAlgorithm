// pointers and how it works
#include<iostream>
using namespace std;
int main(){
    int a = 20;
    // making pointer
    int *ptr = &a; // &a will give address of a and pointer data type will be same as variable data type
    cout<<ptr<<endl;
    cout<<&a;
  return 0;
}