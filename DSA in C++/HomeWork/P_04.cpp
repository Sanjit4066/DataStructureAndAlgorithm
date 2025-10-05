//  Q.4. Write a Program to implement max and min in arrays.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter value of n:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter your element:";
        cin >> arr[i];
    }
    cout << "elements of array are:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int max = INT_MIN;
    int min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Max element of array is:" << max;
    cout << endl;
    cout << "Min element of array is:" << min;


    return 0;
}