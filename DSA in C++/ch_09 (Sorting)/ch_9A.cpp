/* Merger sort Problem
we have given two array 
arr1={10,25,30,35}
arr2={20,31,38,39,40,50}
Now we have to merge both array which should be sorted
newArray={10,20,25,30,31,35,38,39,40,50} */ 
#include<iostream>
using namespace std;
int main(){
    int arr1[] = {10,25,30,35};
    int size01 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {20,31,38,39,40,50};
    int size02 = sizeof(arr2)/sizeof(arr2[0]);
    int size = size01 + size02;
    int newArr[size];

    int i = 0, j = 0, k = 0;
    while(i < size01 && j < size02) {
        if(arr1[i] < arr2[j]) {
            newArr[k++] = arr1[i++];
        } else {
            newArr[k++] = arr2[j++];
        }
    }
    while(i < size01) {
        newArr[k++] = arr1[i++];
    }
    while(j < size02) {
        newArr[k++] = arr2[j++];
    }

    for(int m = 0; m < size; m++) {
        cout << newArr[m] << " ";
    }
    return 0;
}