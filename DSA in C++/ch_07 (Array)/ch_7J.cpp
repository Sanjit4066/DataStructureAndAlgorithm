// finding reverse  of an array
#include<iostream>
using namespace std;
void reverseArray(){
    int size=6;
    int arr[size]={1,2,3,4,5,6};
    int reverseArray[size];
    for (int i = 0; i < size; i++)
    {
        reverseArray[i]=arr[size-i-1];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<reverseArray[i]<<" ";
    }
}
int main(){
    reverseArray();
  return 0;
}