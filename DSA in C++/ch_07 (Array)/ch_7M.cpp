// program to swap the max and min value of an array
#include <iostream>
using namespace std;
void swapMaxMin()
{
    int size = 6;
    int arr[size] = {10, 20, 30, 40, 50, 60};
    int max = INT_MIN, min = INT_MAX; // max element assign with lowest and min with highest value
    int maxIDX = -1, minIDX = -1;
    // finding min and max element
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            maxIDX = i;
        }
        if (min > arr[i])
        {
            min = arr[i];
            minIDX = i;
        }
    }
    // swapping value
    if (maxIDX != -1 && minIDX != -1)
    {
        int temp = arr[maxIDX];
        arr[maxIDX] = arr[minIDX];
        arr[minIDX] = temp;
    }
    // printing array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    swapMaxMin();
    return 0;
}