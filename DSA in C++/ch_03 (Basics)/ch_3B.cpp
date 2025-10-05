// checking the character is either upper case or lower case
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter your character: ";
    cin >> ch;
    
    
    // if (ch >= 'a' && ch <= 'z'){
    //     cout<<"Your Character is in LowerCase";
    // }
    // else{
    //     cout<<"Your Character is in UpperCase";
    // }
    
    
    
    if (ch >= 65 && ch <= 90){ //in memoery character is stored in Int form(ASCII Value) so we can compare character with int value there is implicit conversion.
        cout<<"Your Character is in UpperCase";
    }
    else{
        cout<<"Your Character is in LowerCase";
    }
        return 0;
}