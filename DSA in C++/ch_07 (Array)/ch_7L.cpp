// program to add and multiply all element of an array
#include<iostream>
using namespace std;
void arrayCalculation(){
    int size=5;
    int arr[size]={3,4,5,6,7};
    int sum=0, product=1;
    for (int i = 0; i < size; i++)
    {
       sum+=arr[i];
       product*=arr[i];
    }
    cout<<"Sum of element is:"<<sum<<endl;
     cout<<"product of element is:"<<product<<endl;

}
int main(){
    arrayCalculation();
  return 0;
}