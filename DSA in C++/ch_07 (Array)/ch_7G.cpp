// removing element from an array
#include <iostream>
using namespace std;
int main()
{
    int array[] = {21, 23, 1, 34, 54, 66};
    int size = 6;
    int newArray[size - 1];
    int j = 0;
    int idx = -1;
    int targetElement = 34;
    for (int i = 0; i < size; ++i)
    {
        if (array[i] == targetElement)
        {
            idx = i;
            break;
        }
    }
    if (idx != -1)
    {
        cout << "Index of targetElement is:" << idx << endl;
    }
    for (int i = 0; i < size; i++) // copying all element except target element in new array
    {
        if (i == idx)
        {
            continue; //skip the iteration when idx=i so when i=3 it will directly go to i=4
        }
        newArray[j++] = array[i];
    }

    cout << "printing newArray:" << endl;
    for (int i = 0; i < size - 1; i++)
    {
        cout << newArray[i] << " ";
    }

    return 0;
}