/*
 * Task 60: Find All Divisors of N
 * Input: Natural number N
 * Output: All divisors in ascending order
 * Optimization: Check up to √N only
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    int limit = sqrt(n);
    
    // Print divisors up to √N
    for (int i = 1; i <= limit; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    
    // Print divisors from √N downwards (paired divisors)
    for (int i = limit; i >= 1; i--) {
        if (n % i == 0 && i != n / i) {
            cout << n / i << " ";
        }
    }
    
    return 0;
}
