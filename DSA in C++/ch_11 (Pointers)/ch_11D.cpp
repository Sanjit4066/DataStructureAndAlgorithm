// changing value inside main function through pass by reference using alias
#include <iostream>
using namespace std;
void changeA(int &b)
{    // pass by reference using alias
    b = 20;  // here b is another name of a.
}
int main()
{
    int a = 10;
    changeA(a);
    cout << "Inside main fnx:" << a << endl;
    return 0;
}