// program to insert an element at any index in an array
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = 10;
    int idx = 5;
    int arr2[size + 1];
    for (int i = 0; i < idx; i++) // element till idx where element to be store is copied
    {
        arr2[i] = arr[i];
    }
    for (int i = idx; i < size + 1; i++)// it will continue from 5 to copy 99 and other element
    {
        arr2[i] = arr[i - 1];// it will copy element after idx
        arr2[idx] = 99; //it will put 99 at index 5
    }
    for (int i = 0; i < size + 1; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}
