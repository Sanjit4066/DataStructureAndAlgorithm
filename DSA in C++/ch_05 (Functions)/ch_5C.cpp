// here i will find sum from 1 to n using function
#include<iostream>
using namespace std;
int sumOfNumbers(int n){
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
   
    return sum;
    
}
int main(){
//     int result=sumOfNumbers(10);
//     int result2=sumOfNumbers(20);
//     cout<<"sum of number: "<<result<<endl;
//     cout<<"sum of number: "<<result2;
       int result=sumOfNumbers(10);
       cout<<"sum of number: "<<result<<endl;

       int result=sumOfNumbers(23);
       cout<<"sum of number: "<<result<<endl;

       int result=sumOfNumbers(15);
       cout<<"sum of number: "<<result<<endl;
  return 0;
}
