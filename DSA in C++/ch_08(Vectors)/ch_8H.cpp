// demonstration of pass by value 
#include <iostream>
#include <vector>
using namespace std;

void modifyByValue(vector<int> v) {   // it will make a copy
    v[0] = 200;  // changes made in copy of original vector
}

int main() {
    vector<int> nums = {1, 2, 3};

    modifyByValue(nums);  // call function
    cout << "After modifyByValue: ";
    for (int x : nums) // printing original vector
        cout << x << " ";
    cout << endl;

    return 0;
}
