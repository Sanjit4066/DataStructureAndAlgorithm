// sum of all number from 1 to n which is divisible by 3.
#include<iostream>
using namespace std;
int main(){
    int n; int sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i = 0; i < n; i+=3)
    {    if (i%3==0)
    {
        sum+=i;
    }
    }
    cout<<"Sum is: "<<sum;
    
  return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int n; int sum=0;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for (int i = 0; i < n; i+=3)
//     {
//         sum=sum+i;
//     }
//     cout<<"Sum is: "<<sum;
    
//   return 0;
// }