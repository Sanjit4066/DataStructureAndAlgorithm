// here I m finding smallest and largest element of an array
#include <iostream>
using namespace std;
int main()
{
  int num[] = {23, 11, -24, 56, -89, 68};
  int size = 6;
  int largest = INT_MIN;  // Initialized with minimum value so it could be smaller than first value and store that value
  int smallest = INT_MAX; // initialized with maximum value so it could win from 1st element and store that value
  for (int i = 0; i < size; i++)
  {
    smallest = min(num[i], smallest); // implicit function in c++
    largest = max(num[i], largest);
  }
  cout << "smallest:" << smallest << " largest:" << largest << endl;
  int idx = -1;
  for (int i = 0; i < size; ++i)
  {
    if (smallest == num[i])
    {
      idx = i;
      cout << "smallest value index is:" << idx << endl;
      
    }

    if (largest == num[i])
    {
      idx = i;
      cout << "largest value index is:" << idx << endl;
      break;
    }
  }

  return 0;
}