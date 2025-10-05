// function to print intersection of two arrays
#include <iostream>
using namespace std;
void arraysIntersection()
{
    int size = 6;
    int arr1[size] = {1, 2, 3, 4, 5, 6}, arr2[size] = {9, 8, 7, 6, 5, 4};
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout <<arr1[i] << " ";
                break;
            }
            
        }
    }
}
int main()
{   cout<< "same element are:";
    arraysIntersection();
    return 0;
}
