// As Bubble sort run also if array is already sorted so in this I made some checks so it will make our code more efficient.
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    
    
    for (int i = 0; i < n- 1; i++)
    {   int flag = 0; // flag
        for (int j = 0; j < n-1-i; j++) // comparison
        {   
            if (arr[j]>arr[j+1]) //swapping
            {
                swap(arr[j], arr[j+1]);
                flag = 1;       // set to 1 if swapping happens
            }
            
        }
        if (flag == 0)         // no swapping then stop, we have sorted array no more pass needed
        {
            break;
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
