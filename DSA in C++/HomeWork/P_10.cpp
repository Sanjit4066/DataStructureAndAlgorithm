// Q.10. Binary to Decimal and vice versa.

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
// function to convert decimal to binary
 int decToBinary(int DecNum){
         
    int rem;
    int ans=0;
    int power=1;
    while (DecNum>0)
    {
        rem=DecNum%2; //we will get reminder
        DecNum/=2; //here decimal number will update for next iteration like if decNum=10 it becomes 5
        ans+=(rem*power); 
        power*=10; // here power will update from 10 to the power 0 to 10 to the power 1 and so on
    }
    return ans;
    
     
    }
int main(){
    int num;
    int decNum;
    cout<<"enter a binary number:";
    cin>>num;
    cout<<"Enter decimal number:";
    cin>>decNum;
    int result=binaryToDecimal(num);
    int result2=decToBinary(decNum);
    cout<<"Decimal Value of Binary Number "<<num<<" is:"<<result<<endl;
     cout<<" Binary Number od decimal number "<<decNum<<" is:"<<result2;
  return 0;
}