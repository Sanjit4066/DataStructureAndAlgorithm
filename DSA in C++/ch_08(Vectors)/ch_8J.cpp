// pass by value and pass by reference (&) difference
#include <iostream>
#include <vector>
using namespace std;

void modifyByValue(vector<int> v) {
    v[0] = 100; // changes local copy only doesn't replace 1 with 100
}

void modifyByReference(vector<int>& v) {
    v[0] = 200; // changes actual vector, replace 1 with 200
}

int main() {
    vector<int> nums = {1, 2, 3};

    modifyByValue(nums);
    cout << "After modifyByValue: " << nums[0] << endl;  // still 1

    modifyByReference(nums);
    cout << "After modifyByReference: " << nums[0] << endl;  // now 200

    return 0;
}
