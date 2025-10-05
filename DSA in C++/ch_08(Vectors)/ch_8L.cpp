// reverse of a vector
#include <iostream>
#include <vector>
using namespace std;

// Function to print the vector in reverse order
void printReverse(const vector<int> &nums)
{
    cout << "Vector in reverse: ";
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec = {10, 20, 30, 40, 50};

    cout << "Original vector: ";
    for (int x : vec)
        cout << x << " ";
    cout << endl;

    printReverse(vec);

    return 0;
}
