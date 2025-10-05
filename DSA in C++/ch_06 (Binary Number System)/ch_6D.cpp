// here I m finding the reverse of an integer
#include <iostream>
using namespace std;
int reverseInteger(signed int num)
{  
    while (num > 0)
    {
        int lastDigit = num % 10;
        num /= 10;
        cout << lastDigit;
    }
    cout<<endl;
    return true;
}
int main()
{
    signed int n;
    cout << "Enter Integer Value:";
    cin >> n;
    cout<<"Reverse of given Integer "<<n<<" is:"<<reverseInteger(n);

    return 0;
}