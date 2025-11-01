// storing one pointer adress in another pointer
#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    // declaring and initializing pointer
    int *ptr = &a;     // &a will give address of a and pointer data type will be same as variable data type
    int **ptr2 = &ptr; // here int* is data type of pointer one
    cout << &a<<endl;
    cout << ptr << endl;
    cout<<&ptr<<endl; //adress of 1st pointer
    cout << ptr2 << endl; // ptr2 storing adress of  1st pointer
    cout<<*(ptr)<<endl;
    cout<<*(&a); // *() it is derefrence operator it will give value which is stored at (&a) adress

    return 0;
}