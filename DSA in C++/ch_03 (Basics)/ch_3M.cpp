//here I will find factorial on n number
#include<iostream>
using namespace std;
int main(){
    int n; long long factorial=1;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        factorial=factorial*i;
    }
    cout<<"Factorial is: "<<factorial;
    
  return 0;
}
