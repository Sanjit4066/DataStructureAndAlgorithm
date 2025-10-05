// Q.8. You are given an integer n. You have to print all numbers from 1 to n using recursion only.
#include<iostream>
using namespace std;
void nNaturalNumber(int n){
    if (n==0)
    {
        return ;
    }
    nNaturalNumber(n-1);
    cout<<n<<" ";
}
int main(){
    nNaturalNumber(10);
  return 0;
}