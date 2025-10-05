// here I will find the sum of digits of a given number
#include <iostream>
using namespace std;
int sumOfDigit(int num)
{
    int digitSum;
    while (num > 0)
    {
        int lastDigit = num % 10;
        num /= 10;
        digitSum += lastDigit;
    }
    return digitSum;
}
int main()
{
    int num;
    cout << "enter value of num:";
    cin >> num;
    int result = sumOfDigit(num);
    cout << "sum of digit of " << num << " is:" << result << endl;
    return 0;
}