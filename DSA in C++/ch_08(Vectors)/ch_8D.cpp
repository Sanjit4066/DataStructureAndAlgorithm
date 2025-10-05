// push back function is used to store value at last index in a vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <int> vec(5,2); 
  cout<<"Size of Vector befor push_back:"<<vec.size()<<endl;
  vec.push_back(23);
  vec.push_back(24);
  vec.push_back(26);
  vec.push_back(30);
  for(int i: vec){  
    cout<<i<<" ";
  }
   cout<<endl<<"Size of Vector after push_back:"<<vec.size()<<endl;
  return 0;
}