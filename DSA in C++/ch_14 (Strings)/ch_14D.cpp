// Introduction to string
#include<iostream>
#include<String>
using namespace std;
int main(){
  string str = "Apna college"; // String are Dynamic in nature (runtime resize) and contiguous (store serially)
  cout<<str<<endl; 
  str="hello";
  cout<<str<<endl;
  // string also support operators.
  string str1 ="Sanjit";
  string str2 ="Kushwaha";
  string str3 = str1 + str2; // concatenation
  // comparing two string
  cout<<(str1 == str2)<<endl;
  cout<<str3;
  return 0;
}