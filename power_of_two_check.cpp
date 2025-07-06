/*
 * Problem:
 * Given a natural number N, determine if it is a power of 2.
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    if (number <= 0) {
        cout << "No";
        return 0;
    }

    while (number > 1) {
        if (number % 2 != 0) {
            cout << "No";
            return 0;
        }
        number = number / 2;
    }

    cout << "Yes";
    return 0;
}
