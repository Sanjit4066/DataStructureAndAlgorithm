// function to check an element is present in an array  or not
#include <iostream>
using namespace std;
void checkElement()
{
    int size = 7;
    int arr[size] = {1, 2, 1, 3, 4, 6, 5};
    int targetElement1 = 7;
    int targetElement2 = 19;
    bool isPresent;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == targetElement1 || arr[i] == targetElement2 == 0)
        {
            isPresent = 1;
            break;
        }
    }
    if (isPresent != 0)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}
int main()
{
    checkElement();
    return 0;
}