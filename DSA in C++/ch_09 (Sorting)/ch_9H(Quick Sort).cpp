/*
  QuickSort -> 
  In this we will have two function first one is for creating partition and second one is for QuickSort.

  Partition logic -> we will take an array and choose any element as piviot element for sake of simplicity let's take start of array as piviot element and take two pointer start and end pointer put start at lower bound and end with upper bound and the logic is pointer will move only while start is smaller than end and then our start will increment while array[start] < piviot and end will decrement only while piviot is smaller than array[end]

*/
#include <iostream>
using namespace std;

int partition(int arr[], int lb, int ub) {
    int pivot = arr[lb];
    int st = lb;
    int end = ub;

    while (st < end) {
        while (st <= ub && arr[st] <= pivot) {
            st++;
        }
        while (end >= lb && arr[end] > pivot) {
            end--;
        }

        if (st < end) {
            swap(arr[st], arr[end]);
        }
    }

    swap(arr[lb], arr[end]); // correct pivot placement
    return end;
}

void QuickSort(int arr[], int lb, int ub) {
    if (lb < ub) {
        int loc = partition(arr, lb, ub);
        QuickSort(arr, lb, loc - 1);
        QuickSort(arr, loc + 1, ub);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    printArray(arr, n);

    QuickSort(arr, 0, n - 1);

    cout << "Sorted array:\n";
    printArray(arr, n);

    return 0;
}