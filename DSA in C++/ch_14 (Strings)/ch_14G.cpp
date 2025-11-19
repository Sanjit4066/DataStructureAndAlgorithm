// checking a string is palindrome or not
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "Apna college";
    cout << str << endl;
    string rev = str;
    reverse(rev.begin(), rev.end()); // iterators
    bool isPalindrome = (str == rev);
    if (isPalindrome)
    {
        cout << "Given string is palindrome";
    }
    else
    {
        cout << "Given string is not palindrome";
    }
    return 0;
}