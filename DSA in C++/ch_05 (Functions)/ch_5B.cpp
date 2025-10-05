// here I am making a function which checks you are eligible for vote or not?

#include<iostream>
using namespace std;
void check(){
    int age;
    cout<<"enter your age:";
    cin>>age;
    if (age<1){
        cout<<"invalid input";
    }
    else if(age>=18){
        cout<<"You are eligible for vote"<<endl;
        cout<<"Just need a voter ID card";
    }
    else{
        cout<<"You are not eligible for vote before you are 18";
    }
}
int main(){
    cout<<"If you want to check your eligiblity press 1"<<endl;
    cout<<"If not then press 0"<<endl;
    int a;
    cout<<"enter a:";
    cin>>a;
    if(a==0)
    {
        cout<<"You choose not to check";
    }
    else if (a==1)
    {
        check();//invoking function
    }
    else{
        cout<<"invalid input";
    }
    
    
  return 0;
  
}