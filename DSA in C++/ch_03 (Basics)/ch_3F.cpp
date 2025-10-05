#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int sum=0;
    int i=1;
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"sum of number from 1 to "<<n<<" is: "<<sum;
  return 0;
}