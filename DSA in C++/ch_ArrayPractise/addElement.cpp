 #include<iostream>
using namespace std;
void addElement(int array[], int size, int targetIndex, int Value){
    if (size < targetIndex)
    {
        cout<<"Invalid Index";
    }
    
    for (int i = targetIndex; i < count; i++)
    {
        /* code */
    }
    
}
int main(){
  int array [] = {2,3,4,5,6,7,8,9,10,12,13};
  int targetIndex = 5;
  int value = 35;
  int size = sizeof(array) / sizeof(array[0]);
  addElement(array, size ,targetIndex, value);
  return 0;
}