// All the inbuilt functions of strings
#include<iostream>
#include<string>
#include<algorithm>
#include <cstring>
using namespace std;
int main(){
  string str ="RACECAR";

  //reverse() TimeComplexity->O(n)
  reverse(str.begin(),str.end());
  cout<<str;//RACECAR

  // substr() TimeComplexity->O(n)
  //str.substr(1,3);
  cout<<endl<<str.substr(1,3); //ACE
  cout<<endl<<str.substr(1);// since end is not provide it will print str till end of string
  //ACECAR

  // '+' operator. conatenate string eg. "Sub"+"Total"->SubTotal
  string str1 = "Sub";
  string str2 = "Total";
  cout<<endl<<str1+str2<<endl; //SubTotal
  // OR 
  //str1+=str2;  //str2 is appended in str1
  //cout<<endl<<str1;
  //str1=str1+str2; // copying string created for s1 is creating extra space.
  
  //strcat() used to concatenate two character array
  char s1[20] = {"Character"};
  char s2[20] = {"Array"};
  strcat(s1,s2);
  cout<<s1<<endl;

  //push_back -> insert char at the end of the string
  

  
  return 0;
}