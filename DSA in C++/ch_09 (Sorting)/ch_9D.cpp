// selection sort. Time Complexity --> O(n^2)

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    
    for (int i = 0; i < n-1; i++)
    {   int smallestIdx=i; //setting first element as smallest value (unsorted part starting)
        for (int j = i+1; j < n ; j++)
        {
            if (arr[j] <  arr[smallestIdx])
            {
                smallestIdx=j; 
            }
        }
        swap(arr[i], arr[smallestIdx]);// swapping larger value with smaller to next index
    }
    for (int i = 0; i < n; i++) // printing sorted array
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{   int nums[]={2,4,6,1,3,5,9};
    int  n = sizeof(nums)/sizeof(nums[0]);
    selectionSort(nums,n);
    return 0;
}
