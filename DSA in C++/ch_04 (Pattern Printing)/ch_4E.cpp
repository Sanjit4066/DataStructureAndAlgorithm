// triangular pattern with characters
//  A
//  A B
//  A B C
//  A B C D
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter value of n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << " " << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}