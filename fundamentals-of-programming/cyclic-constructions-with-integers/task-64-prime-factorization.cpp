/*
 * Task 64: Prime Factorization
 * Input: Natural number N
 * Output: Prime factors with their powers (e.g., 2^2 3^1 5^1)
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    // Check for factor 2
    if (n % 2 == 0) {
        int count = 0;
        while (n % 2 == 0) {
            count++;
            n = n / 2;
        }
        cout << 2 << "^" << count << " ";
    }
    
    // Check odd factors from 3 onwards
    for (long long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                count++;
                n = n / i;
            }
            cout << i << "^" << count << " ";
        }
    }
    
    // If n > 1, then it's a prime factor itself
    if (n > 1) {
        cout << n << "^1";
    }
    
    return 0;
}
