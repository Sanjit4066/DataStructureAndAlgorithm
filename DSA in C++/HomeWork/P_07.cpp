//  Q.7. Write a program to implement Tower of Hanoi problem.
#include <iostream>
using namespace std;
void TowerOfHanoi(int n, string Src, string alt, string dest)
{
    if (n == 1)
    {
        cout << "Disk " << n << " Transfer from " << Src << " to " << dest << endl;
        return;
    }
    TowerOfHanoi(n - 1, Src, dest, alt);
    cout << "Disk " << n << " Transfer from " << Src << " to " << dest << endl;
    TowerOfHanoi(n - 1, alt, Src, dest);
}
int main()
{
    TowerOfHanoi(3, "S", "H", "D");
    return 0;
}