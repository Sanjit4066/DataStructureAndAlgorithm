// here we are using cin.getline(character array, len, delimiter) function to get input
#include <iostream>
using namespace std;
int main()
{
    char str[100];                                         // if initialization is not done then len must be enter for no error.
    cout << "Taking input without cin.getline():" << endl; // nothing will print after space or next line.
    cin >> str;
    cout << "output:" << str << endl;
    cout << "Taking input using cin.getline():" << endl; // College wallah $ is the best channel for DSA.
    cin.getline(str, 100, '$');                          // it will stop taking input after using dollar we can take input in next line as well until it found $,(len matters).
    cout << "output:"<<str;                              // College Wallah
    return 0;
}