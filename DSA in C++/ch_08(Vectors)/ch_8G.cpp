// vector dynamic memory allocation here we can see every time we push_back an element in a vector its capacity nearly doubles not always (genrally and depends on compiler).
// In this code you can check how memory grows as required.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(0); // size 1 capacity 1
    cout << "vector size:" << vec.size() << endl;
    cout << "vector capacity:" << vec.capacity() << endl;
    vec.push_back(1); // size 2 capacity 2
    cout << "vector size:" << vec.size() << endl;
    cout << "vector capacity:" << vec.capacity() << endl;
    vec.push_back(2); // size 3 capacity 4
    cout << "vector size:" << vec.size() << endl;
    cout << "vector capacity:" << vec.capacity() << endl;
    vec.push_back(3); // size 4 capacity 4
    cout << "vector size:" << vec.size() << endl;
    cout << "vector capacity:" << vec.capacity() << endl;
    vec.push_back(5); // size 5 capacity 8
    cout << "vector size:" << vec.size() << endl;
    cout << "vector capacity:" << vec.capacity() << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "vector size:" << vec.size() << endl;         // size:5
    cout << "vector capacity:" << vec.capacity() << endl; // capacity:8

    return 0;
}