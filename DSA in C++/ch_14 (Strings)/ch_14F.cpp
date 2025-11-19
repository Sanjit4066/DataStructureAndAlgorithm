// reverse a string 
#include<iostream>
#include<string>
# include<algorithm>
using namespace std;
int main(){
  string str = "Apna college"; 
  cout<<str<<endl; 
  reverse(str.begin(),str.end()); //iterators
  cout<<str;
  return 0;
}