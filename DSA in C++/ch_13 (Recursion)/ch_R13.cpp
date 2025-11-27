// here i will find all the possible combinations of string abcd via recursion
#include<iostream>
#include<vector>
using namespace std;
void getPerms(vector<char>& arr, int idx, vector<vector<char>>&ans){
    if ( idx == arr.size())
    {
        ans.push_back({arr});
        return;
    }
    for(int i = idx; i<arr.size(); i++){  
        swap(arr[idx], arr[i]);    // swapping characters position to form combinations
        getPerms(arr,idx+1,ans);

        swap(arr[idx], arr[i]);    // backtracking
    }
    
}
int main() {
    vector<char> arr = {'a', 'b', 'c', 'd'};
    vector<vector<char>> ans;
    getPerms(arr, 0, ans);

    for (const vector<char>& result : ans) { //printing the output
        for (char c : result) {
            cout << c;
        }
        cout << " ";
    }
    cout << endl;
    return 0;
}