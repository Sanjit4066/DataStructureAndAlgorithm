// implementing member function in stl
#include<iostream>
#include<map>
using namespace std;
int main(){
  map<string,int> directory;
  
  directory["Ram"] = 56789;
  directory["Raman"] = 56799;
  directory["Shayam"] = 56987;
  
  //for each loop
  for( auto element : directory){ 
    cout<<"Name-"<<element.first<<endl;
    cout<<"Phone No.-"<<element.second<<endl;
  }
  cout<<endl;

  map<string,int>::reverse_iterator itr;
  //print in reverse order
  for(itr = directory.rbegin(); itr!=directory.rend(); itr++){
    cout<<"Name-"<<itr->first<<endl<<"phone No.-"<<itr->second<<endl;
  }
  return 0;
}