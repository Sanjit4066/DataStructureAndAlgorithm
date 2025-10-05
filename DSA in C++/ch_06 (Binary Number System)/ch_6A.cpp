// converting Decimal to Binary Number System
#include<iostream>
using namespace std;
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
    int DecNum;
    cout<<"enter decimal number: ";
    cin>>DecNum;
    cout<<decToBinary( DecNum);
  return 0;
}