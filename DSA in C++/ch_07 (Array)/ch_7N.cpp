// function to find the unique value of array
#include <iostream>
using namespace std;
void findUniqueElement()
{
    int size = 6;
    int arr[size] = {1, 2, 3, 1, 4, 5};
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; i < size; j++)
        {

            if (arr[i] != arr[j])
            {
                cout << arr[i] << " ";
    
            }
            break;
        }
    }
}
int main()
{
    cout<<"unique element are:";
    findUniqueElement();
    return 0;
}