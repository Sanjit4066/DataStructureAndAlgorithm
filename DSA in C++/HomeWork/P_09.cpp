//  Q.9. Sum of first N natural numbers.
#include<iostream>
using namespace std;
int sumOfNaturalNum(int n){
    if (n==0)
    {
        return 0;
    }
   return n+sumOfNaturalNum(n-1);
    
}
int main(){
    cout<<"sum of natural number is:"<<sumOfNaturalNum(10);
  return 0;
}