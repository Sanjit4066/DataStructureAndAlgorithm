// using size function
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <int> vec(5,2); // no. of element 5 and at every indec stored element is 2
  cout<<"Size of Vector is:"<<vec.size()<<endl;
  //for each loop
  for(int i: vec){  // here int i represent value of vectors and their data type
    cout<<i<<" ";
  }
  return 0;
}