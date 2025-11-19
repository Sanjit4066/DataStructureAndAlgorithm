// find maximum element of an array using recursive function
#include <iostream>
using namespace std;

int maxElement(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int maxRest = maxElement(arr, n - 1);
    return (arr[n - 1] > maxRest) ? arr[n - 1] : maxRest;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum element in the array is: " << maxElement(arr, size);
    return 0;
}
