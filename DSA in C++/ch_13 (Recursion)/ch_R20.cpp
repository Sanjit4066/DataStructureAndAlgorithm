// checking if a string is palindrome or not
#include<iostream>
#include<string>
using namespace std;
bool checkPalindrome(const string& s, int low){
    int n = s.size();
    if(low >= n/2){
        return true;
    }
    else if(s[low] != s[n-low-1]){
        return false;
    }
    else{
        return checkPalindrome(s, low+1);
    }
}
int main(){
  string s = "RACE";
  bool isPal = checkPalindrome(s, 0);
  cout << (isPal ? "Palindrome" : "Not Palindrome") << endl;
  return 0;
}