// write the exponential value of 2 to the power 10(2^10) using recursive function
#include<iostream>
using namespace std;
int exponential(int n, int e){
    if (e==0)
    {
        return 1;
    }
    cout<<n*exponential(n, e-1);
}
int main(){
    exponential(2,10);
  return 0;
}