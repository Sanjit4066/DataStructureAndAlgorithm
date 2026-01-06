// Implementing hash table with closed addressing.
#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

class Hashing{
public:
  vector<list<int>> hashtable;
  int buckets;

  Hashing(int size){
    buckets = size;
    hashtable.resize(size);
  }

  int hashValue(int key){
    return key%buckets; //division method
  }

  void addKey(int key){
    int idx = hashValue(key);
    hashtable[idx].push_back(key); //push_back -> linkedlist function
  }

  list<int>::iterator searchKey(int key){
    int idx = hashValue(key);
    return find(hashtable[idx].begin(), hashtable[idx].end(),key);
  }

  void deleteKey(int key){
    int idx = hashValue(key);
    if (searchKey(key) != hashtable[idx].end()){ // key is present
        hashtable[idx].erase(searchKey(key));
    }
    else{
        cout<<"key is not present inside the hashtable";
    }
  }

};

int main(){
  Hashing h(10);
  h.addKey(5);
  h.addKey(3);
  h.addKey(7);
  h.addKey(8);
  h.deleteKey(8);
  h.deleteKey(8);
  return 0;
}