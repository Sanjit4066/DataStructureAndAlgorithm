//Hoare’s partition scheme
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];             // choose first element as pivot
    int left = low + 1;               // left pointer
    int right = high;                 // right pointer

    while (true) {
        while (left <= right && arr[left] <= pivot) left++;   // move left pointer until element > pivot
        while (left <= right && arr[right] >= pivot) right--; // move right pointer until element < pivot

        if (left > right) break;        // stop if pointers cross
        swap(arr[left], arr[right]);    // swap misplaced elements
    }

    swap(arr[low], arr[right]);         // place pivot in its correct position
    return right;                       // return pivot's final index
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {                                      // base condition
        int pivotIndex = partition(arr, low, high);        // partition array
        quickSort(arr, low, pivotIndex - 1);               // sort left part
        quickSort(arr, pivotIndex + 1, high);              // sort right part
    }
}

int main() {
    vector<int> arr = {8, 3, 7, 4, 9, 2};                  // input array
    int n = arr.size();                                    // size of array

    cout << "Before sorting: ";
    for (int x : arr) cout << x << " ";                    // print before sorting
    cout << endl;

    quickSort(arr, 0, n - 1);                              // call quick sort

    cout << "After sorting: ";
    for (int x : arr) cout << x << " ";                    // print after sorting
    cout << endl;

    return 0;
}
