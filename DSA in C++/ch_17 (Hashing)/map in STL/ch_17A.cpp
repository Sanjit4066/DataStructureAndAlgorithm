// implementing map in stl
#include<iostream>
#include<map>
using namespace std;
int main(){
  map<string,int> directory;
  
  //Insertion
  //ascending value by default
  directory["Ram"] = 56789;
  directory["Raman"] = 56799;
  directory["Shayam"] = 56987;
  
  //for each loop
  for( auto element : directory){ //auto will take datatype itself
    cout<<"Name-"<<element.first<<endl;
    cout<<"Phone No.-"<<element.second<<endl;
  }
  cout<<endl;

  directory.insert(make_pair("Ram",354689)); // doesn't store duplicate key valye since Ram is already exist(do nothing) TC->O(log n)
  directory["Ram"] = 4877549; //update value for Ram
   for( auto element : directory){ //auto will take datatype itself
    cout<<"Name-"<<element.first<<endl;
    cout<<"Phone No.-"<<element.second<<endl;
  }
  return 0;
}