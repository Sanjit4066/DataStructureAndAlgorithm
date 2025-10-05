//this is the optimized and shorter version of ch_5G
#include <iostream>
using namespace std;

// Function to compute nCr directly (optimized)
int binomialCoefficient(int n, int r) {
    if (r > n - r)  
        r = n - r;  // nCr = nC(n-r) (use smaller r for efficiency)

    int result = 1;
    for (int i = 0; i < r; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    if (n >= r && r >= 0) {
        int result = binomialCoefficient(n, r);
        cout << "Binomial coefficient for " << n << "C" << r << " is: " << result << endl;
    } else {
        cout << "Invalid input. Make sure n >= r and r >= 0." << endl;
    }

    return 0;
}
