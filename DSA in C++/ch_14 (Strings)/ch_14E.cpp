// using getline function for input
#include<iostream>
#include<string>
using namespace std;
int main(){
  string str;
  getline(cin, str); // delimiter is optional
  cout<<str;
  return 0;
}