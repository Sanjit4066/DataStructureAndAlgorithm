/*
 stock span problem
 In this problem we have to count the number of consecutive days when price are lower than current day price.
 pirces=[100,80, 60, 70, 60, 75, 85]
*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    int n = prices.size();
    
    // 1. Initialize with size 'n' to avoid memory errors
    vector<int> ans(n); 
    stack<int> s;

    for (int i = 0; i < n; i++) {
        // 2. Access the price at the index stored in the stack
        while (!s.empty() && prices[s.top()] <= prices[i]) {
            s.pop();
        }

        if (s.empty()) {
            ans[i] = i + 1;
        } else {
            ans[i] = i - s.top();
        }
        
        s.push(i);
    }

    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}