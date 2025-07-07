/*
 * Print all prime numbers between two natural numbers N1 and N2 (inclusive).
 */

#include <iostream>
using namespace std;

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    for (int i = N1; i <= N2; i++) {
        if (i < 2) continue;

        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }

    return 0;
}
