// vectors syntax and initialization
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   // vector<int> vec;                   // declaration of vector;
    vector<int> vec = {1, 2, 3, 4, 5}; // intialization
    // print vector element
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}