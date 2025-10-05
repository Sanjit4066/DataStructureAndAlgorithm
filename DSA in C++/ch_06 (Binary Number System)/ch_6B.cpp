// Converting three-digit octal number to Binary number System
#include <iostream>
using namespace std;

int firstDig, secondDig, thirdDig; // global digits

// Extract digits from octal number
void DigitOfNum(int octalNum)
{
    thirdDig = octalNum % 10; // last digit
    int reserveValue = octalNum / 10;
    secondDig = reserveValue % 10; // middle digit
    firstDig = reserveValue / 10;  // first digit

    cout << "FirstDig: " << firstDig
         << " SecondDig: " << secondDig
         << " ThirdDig: " << thirdDig << endl;
}

// Convert a single decimal digit (0–7) into binary
int digitToBinary(int digit)
{
    int binary = 0, power = 1;
    while (digit > 0)
    {
        int rem = digit % 2;
        digit /= 2;
        binary += rem * power;
        power *= 10;
    }
    return binary;
}

int main()
{
    int Num;
    cout << "Enter octal number (3 digits): ";
    cin >> Num;

    // extract digits
    DigitOfNum(Num);

    // convert each digit to binary
    int firstDigitBinary = digitToBinary(firstDig);
    int secondDigitBinary = digitToBinary(secondDig);
    int thirdDigitBinary = digitToBinary(thirdDig);

    // print result
    cout << "The Binary Number of octal number " << Num
         << " is: " << firstDigitBinary
         << secondDigitBinary
         << thirdDigitBinary << endl;

    return 0;
}

// converting three digit octal number to Binary Number System
// #include <iostream>
// using namespace std;
//  int firstDig, secondDig, ThirdDig;
// void DigitOfNUm(int octalNum)
// {

//     ThirdDig = octalNum % 10;
//     int reserveValue = octalNum / 10;
//     secondDig = reserveValue % 10;
//     firstDig = reserveValue / 10;
//     cout << "FirstDig:" << firstDig << " SecondDig:" << secondDig << " ThirdDig:" << ThirdDig;
// }
// int firstDigBinary()
// {
//     int rem;
//     int firstDigBinary = 0, ThirdDigBiary = 0;
//     int power = 1;
//     while (firstDig > 0) //we are treating each digit as decimal number
//     {
//         rem = firstDig % 2; // we will get reminder
//         firstDig /= 2;      // here decimal number will update for next iteration like if decNum=10 it becomes 5
//         firstDigBinary += (rem * power);
//         power *= 10; // here power will update from 10 to the power 0 to 10 to the power 1 and so on
//     }
//     return firstDigBinary;
// }
// int secondDigitBinary()
// {
//     int rem;
//     int secondDigitBinary = 0;
//     int power = 1;
//     while (firstDig > 0)
//     {
//         rem = firstDig % 2; // we will get reminder
//         firstDig /= 2;      // here decimal number will update for next iteration like if decNum=10 it becomes 5
//         secondDigitBinary += (rem * power);
//         power *= 10; // here power will update from 10 to the power 0 to 10 to the power 1 and so on
//     }
//     return secondDigitBinary;
// }
// int thirdDigBinary()
// {
//     int rem;
//     int thirdDigBinary = 0;
//     int power = 1;
//     while (firstDig > 0)
//     {
//         rem = firstDig % 2; // we will get reminder
//         firstDig /= 2;      // here decimal number will update for next iteration like if decNum=10 it becomes 5
//        thirdDigBinary += (rem * power);
//         power *= 10; // here power will update from 10 to the power 0 to 10 to the power 1 and so on
//     }
//     return thirdDigBinary;
// }

// int main()
// {
//     int Num;
//     cout << "enter octal number:";
//     cin >> Num;
//     cout<<endl;
//     DigitOfNUm(Num);
//     cout<<endl;
//     cout<<"The Binary Number of octal number "<<Num<<" is:"<<firstDigBinary<<secondDigitBinary<<thirdDigBinary;

//     return 0;
// }