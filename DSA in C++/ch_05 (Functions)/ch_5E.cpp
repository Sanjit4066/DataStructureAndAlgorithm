// here I will find the sum of digits of a given number
#include<iostream>
using namespace std;
 int SumOfDigits(int n){
    int  firstDigit, secondDigit, lastDigit, midValue;
    
    firstDigit=n%10;
    midValue =n/10;
    secondDigit=midValue%10;
    lastDigit=midValue/10;
    int sumOfDigit= firstDigit+secondDigit+lastDigit;
    return sumOfDigit;
        
    }
int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    int result=SumOfDigits(n);
    cout<<"Sum Of Digits of "<<n<<" is:"<<result;
  return 0;
}