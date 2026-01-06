// pass by reference demonstration
#include <iostream>
#include <vector>
using namespace std;

void modifyByReference(vector<int>& v) { // pass by reference (& vectorName)
    v[0] = 200; // changes made in original vector
}

int main() {
    vector<int> nums = {1, 2, 3};
    modifyByReference(nums);

    cout << "Vector after modifyByReference: ";
    for (int x : nums) // printing after modification
        cout << x << " ";
    cout << endl;

    return 0;
}
