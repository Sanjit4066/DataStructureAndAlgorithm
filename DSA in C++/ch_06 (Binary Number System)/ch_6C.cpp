// here I'm convirting binary to decimal
#include<iostream>
using namespace std;
int binaryToDecimal(int binNum){
    int pow=1, ans=0;
    while (binNum>0)
    {
        int rem=binNum%10;
        binNum/=10;
        ans+=rem*pow;
        pow*=2;
    }
    return ans;
}
int main(){
    int num;
    cout<<"enter a binary number:";
    cin>>num;
    int result=binaryToDecimal(num);
    cout<<"Decimal Value of Binary Number "<<num<<" is:"<<result;
  return 0;
}