// here I'm printing hollow diamond pattern
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Top part
    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // first star
        cout << "*";

        // spaces inside
        if (i > 0) {
            for (int j = 0; j < 2*i - 1; j++) {
                cout << " ";
            }
            // second star
            cout << "*";
        }
        cout << endl;
    }

    // Bottom part
    for (int i = n - 2; i >= 0; i--) {
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // first star
        cout << "*";

        // spaces inside
        if (i > 0) {
            for (int j = 0; j < 2*i - 1; j++) {
                cout << " ";
            }
            // second star
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
