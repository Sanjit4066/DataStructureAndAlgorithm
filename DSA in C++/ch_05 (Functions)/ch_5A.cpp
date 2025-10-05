#include<iostream>
using namespace std;
// first function to add two integer
int add(int a, int b){ // parameters a and b 
    return a+b;
}
// function to find Min of two numbers
int MinOfTwo(){
    int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<< (a>b?"A is greater":"B is greater");
    return 0;

}
int main(){
    cout<<"add:"<<add(5,10)<<endl; // call function or function invoke
    MinOfTwo();
  return 0;
}
