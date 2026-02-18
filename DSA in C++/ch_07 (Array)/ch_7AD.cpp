//  here I will find exactly one missing element from  an array contain 1 to N values except one value in between.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;

    int xorAll = 0;
    int xorArr = 0;

    for(int i = 1; i <= n; i++)
        xorAll ^= i;

    for(int i = 0; i < n-1; i++)
        xorArr ^= arr[i];

    int missing = xorAll ^ xorArr;

    cout << "Missing number: " << missing;

    return 0;
}
