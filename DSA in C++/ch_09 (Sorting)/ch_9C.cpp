// As Bubble sort run also if array is already sorted so in this I made some checks so it will make our code more efficient.
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    
    for (int i = 0; i < n; i++)
    {   bool isSwap=false; 
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]); // swapping larger value with smaller to next index
                isSwap=true; // set true if swapping happens
            }
        }
        if (!isSwap) // if sorting is not performed then it will return.
        {
            return;
        }
        
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
    bubbleSort(nums,n);
    return 0;
}
