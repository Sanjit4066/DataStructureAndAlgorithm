// Bubble sort. Time Complexity --> O(n^2)
// Bubble sort will run for sorted aaray to so we will see optimization for this  in ch_9C.cpp 
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    
    
    for (int i = 0; i < n- 1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
               swap(arr[j], arr[j+1]);
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
{   int nums[]={5,8,7,3,1,2,12,18,6};
    int  n = sizeof(nums)/sizeof(nums[0]);
    bubbleSort(nums,n);
    return 0;
}
