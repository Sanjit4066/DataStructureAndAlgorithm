// character array
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[] = {'A','B','C','\0'}; // \0 is  Null character.
    // Null character make string valid and doesn't increase size.
    char str2 [] = "College";
    cout<< strlen(str) <<endl;
    cout<<str;
    cout<<endl<<str2;

  return 0;
}
