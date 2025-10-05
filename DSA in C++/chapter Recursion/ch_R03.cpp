// printing number from 1 to N recursively
#include <iostream>
using namespace std;
void printNumber(int n)
{
    
    if (n == 0)
    {
        return;
    }
    printNumber(n-1);
    cout<<n<<" ";
}
int main()
{
    printNumber(20);
    return 0;
}