// Bubble sort. Time Complexity --> O(n^2)
// Bubble sort will run for sorted aaray to so we will see optimization for this  in ch_9C.cpp 
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]); // swapping larger value with smaller to next index
            }
        }
    }
    for (int i = 0; i < n; i++) // printing sorted array
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{   int nums[]={5,8,7,3,1,2};
    int  n = sizeof(nums)/sizeof(nums[0]);
    bubbleSort(nums,n);
    return 0;
}
