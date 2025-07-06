/*
 * Problem:
 * Determine if a given natural number can be expressed as the sum of the squares of two distinct natural numbers.
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool state = false;

    for (int i = 1; i * i < n; i++) {
        for (int j = 1; j * j < n; j++) {
            if (i != j && i * i + j * j == n) {
                state = true;
                break;
            }
        }
        if (state) break;
    }

    if (state) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
