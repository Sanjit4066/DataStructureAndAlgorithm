/* Merger sort Problem
we have given three sorted array
arr1={1,4,7}
arr2={2,5,8}
arr3={3,6,9}
Now we have to merge both array which should be sorted
newArray={1,2,3,4,5,6,7,8,9} */
#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1, 4, 7};
    int size01 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 5, 8};
    int size02 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {3, 6, 9};
    int size03 = sizeof(arr3) / sizeof(arr3[0]);

    int tempSize = size01 + size02;
    int tempArr[tempSize];
    int i = 0, j = 0, k = 0;

    while (i < size01 && j < size02)
    {
        if (arr1[i] < arr2[j])
        {
            tempArr[k++] = arr1[i++];
        }
        else
        {
            tempArr[k++] = arr2[j++];
        }
    }

    while (i < size01)
    {
        tempArr[k++] = arr1[i++];
    }

    while (j < size02)
    {
        tempArr[k++] = arr2[j++];
    }

    int finalSize = tempSize + size03;
    int newArr[finalSize];
    i = 0;
    j = 0;
    k = 0;

    while (i < tempSize && j < size03)
    {
        if (tempArr[i] < arr3[j])
        {
            newArr[k++] = tempArr[i++];
        }
        else
        {
            newArr[k++] = arr3[j++];
        }
    }

    while (i < tempSize)
    {
        newArr[k++] = tempArr[i++];
    }

    while (j < size03)
    {
        newArr[k++] = arr3[j++];
    }

    for (int m = 0; m < finalSize; m++)
    {
        cout << newArr[m] << " ";
    }
    cout << endl;

    return 0;
}