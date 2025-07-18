/*
 * Problem:
 * Find all twin prime pairs (primes that differ by 2) less than or equal to a given number N (N < 10000).
 */

#include <iostream>
using namespace std;

// Helper function to check if a number is prime
bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;
    return true;
}

int main() {
    int N;
    cin >> N;

    for (int i = 2; i <= N - 2; i++) {
        if (is_prime(i) && is_prime(i + 2)) {
            cout << "(" << i << ", " << i + 2 << ")" << endl;
        }
    }

    return 0;
}
