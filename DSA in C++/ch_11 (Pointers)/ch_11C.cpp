// changing value inside main function through pass by reference using pointers
#include <iostream>
using namespace std;
void changeA(int *ptr)
{    // pass by reference using pointers
    *ptr = 20;  // dereferencing ptr value and putting 20 there so now a will become 20
}
int main()
{
    int a = 10;
    changeA(&a);
    cout << "Inside main fnx:" << a << endl;
    return 0;
}