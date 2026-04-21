/*
 * Task 66: Find All Twin Primes
 * Input: Natural number N
 * Output: All twin prime pairs (p, p+2) where both ≤ N
 * Twin Primes: Two primes that differ by exactly 2
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int p = 2; p <= n - 2; p++) {
        // Check if p is prime
        bool isPrime1 = true;
        
        if (p < 2) {
            isPrime1 = false;
        } else if (p == 2) {
            isPrime1 = true;
        } else if (p % 2 == 0) {
            isPrime1 = false;
        } else {
            for (int i = 3; i <= sqrt(p); i += 2) {
                if (p % i == 0) {
                    isPrime1 = false;
                    break;
                }
            }
        }
        
        // Check if p+2 is prime
        bool isPrime2 = true;
        int p2 = p + 2;
        
        if (p2 > n) {
            isPrime2 = false;
        } else if (p2 == 2) {
            isPrime2 = true;
        } else if (p2 % 2 == 0) {
            isPrime2 = false;
        } else {
            for (int i = 3; i <= sqrt(p2); i += 2) {
                if (p2 % i == 0) {
                    isPrime2 = false;
                    break;
                }
            }
        }
        
        // If both are prime, print the pair
        if (isPrime1 && isPrime2) {
            cout << "(" << p << ", " << p2 << ")" << endl;
        }
    }
    
    return 0;
}
