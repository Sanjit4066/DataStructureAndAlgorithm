// multidimentional array
#include <iostream>
using namespace std;
int main()
{
    int m, n, k = 1;
    cout << "enter value of m:";
    cin >> m;
    cout << "enter value of n:";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "enter " << k++ << " element:"; // k will run from 1 to 9
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl; // after completing one row it will print element in new row
    }
    int count=0;
    int sum=0;
    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {
        if (arr[i][j]%2==0)
        {
            count++;
        }
        sum+=arr[i][j];
       }
       
    }
    cout<<"sum of all element is:"<<sum<<endl;
    cout<<"Number of even element are:"<<count;
    

    return 0;
}