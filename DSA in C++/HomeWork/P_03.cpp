//  Q.3. Write a Program to implement addition and multiplication of two 2D arrays.
#include <iostream>
using namespace std;
void twoD_Array()
{
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum[3][3];
    int product[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sum[i][j] << " ";
           
        }
        cout << endl;
    }
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    
}
int main()
{
    twoD_Array();
    return 0;
}