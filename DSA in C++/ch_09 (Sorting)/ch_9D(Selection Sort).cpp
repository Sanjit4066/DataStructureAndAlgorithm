/* selection sort. Time Complexity --> O(n^2)

   Intution ->
   We will take array an consider its left part (SubArray) is sorted and right part (subArray) is unsorted from very first index (from 0) and then we will find minimum element from unsorted part and swap it with the very first elemnt of the unsorted subArray and then we will decrement unsorted Subarray from left and do it for n-1 pass to get sorted array.

*/


#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    
    for (int i = 0; i < n-1; i++)
    {   int min=i; //setting first element as smallest value (unsorted part starting)
        for (int j = i+1; j < n ; j++)
        {
            if (arr[j] <  arr[min])
            {
                min=j; 
            }
        }
        if (min != i)
        {
             swap(arr[i], arr[min]);// swapping larger value with smaller to next index
        }
        
       
    }
    for (int i = 0; i < n; i++) // printing sorted array
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{   int nums[]={2,4,6,1,3,5,9,7,0};
    int  n = sizeof(nums)/sizeof(nums[0]);
    selectionSort(nums,n);
    return 0;
}
