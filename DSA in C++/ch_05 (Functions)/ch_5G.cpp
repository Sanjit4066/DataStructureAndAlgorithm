// here I m finding nCr binomial cofficient for n and r
#include<iostream>
using namespace std;
int  binomialCoefficient(int n, int r){
    
    int nFactorial=1;
    int rFactorial=1;
    for (int i = 0; i < n; i++)
    {
        nFactorial*=(n-i);
    }
    cout<<"factorial of n:"<<nFactorial<<endl;
    for (int j = 0; j < r; j++)
    {
        rFactorial*=(r-j);
    }
     cout<<"factorial of r:"<<rFactorial<<endl;
     int n_rFactorial=1;
    for (int k = 0; k < (n-r); k++)
    {
        n_rFactorial*=((n-r)-k);
    }
     cout<<"factorial of n-r:"<<n_rFactorial<<endl;
    
    return nFactorial/(rFactorial*n_rFactorial);
}
int main(){
    int n,r;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter r:";
    cin>>r;
    if (n>r)
    {
        int result= binomialCoefficient(n,r);
        cout<<"Binomial cofficient for "<<n<<" and "<<r<<" is:"<<result;
    }
    else{
        cout<<"Invalid input.Value of n is smaller than r";
    }
    
  return 0;
}