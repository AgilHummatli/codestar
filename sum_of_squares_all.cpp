/*
 * Problem:
 * Find all natural numbers not exceeding N that can be expressed as the sum of the squares 
 * of two distinct natural numbers.
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i * i < N; i++) {
        for (int j = i + 1; j * j < N; j++) {
            int sum = i * i + j * j;
            if (sum <= N) {
                cout << i << "^2 + " << j << "^2 = " << sum << endl;
            }
        }
    }

    return 0;
}
