/*
 * Task 65: Prime Factorization of N!
 * Input: Natural number N
 * Output: Prime factors of N! with powers
 * Formula: Power of p in N! = ⌊N/p⌋ + ⌊N/p²⌋ + ⌊N/p³⌋ + ...
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Check each number from 2 to N
    for (int p = 2; p <= n; p++) {
        // Check if p is prime
        bool isPrime = true;
        
        if (p == 2) {
            isPrime = true;
        } else if (p % 2 == 0) {
            isPrime = false;
        } else {
            for (int i = 3; i <= sqrt(p); i += 2) {
                if (p % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        // If p is prime, calculate its power in N!
        if (isPrime) {
            int power = 0;
            int pk = p;
            
            while (pk <= n) {
                power += n / pk;
                pk *= p;
            }
            
            cout << p << "^" << power << " ";
        }
    }
    
    return 0;
}
