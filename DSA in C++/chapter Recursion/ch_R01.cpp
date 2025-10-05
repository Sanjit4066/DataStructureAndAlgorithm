// using recursive function printing number from n to 1
#include<iostream>
using namespace std;
void  printNums(int n){
    if (n==0) // base case 
    {
         return;
    }
    cout<<n<<" ";
    printNums(n-1);
    
}
int main(){
    printNums(20);
  return 0;
}