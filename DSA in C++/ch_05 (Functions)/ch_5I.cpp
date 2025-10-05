//function to find factorial;
#include<iostream>
using namespace std;
int factorial(int n){
    int factorial=1;
    for (int i = 1; i <= n; i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int result=factorial(n);
    cout<<"factorial of "<<n<<" is:"<<result;
  return 0;
}