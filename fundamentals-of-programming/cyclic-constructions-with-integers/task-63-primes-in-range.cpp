/*
 * Task 63: Prime Numbers Between N1 and N2
 * Input: Two natural numbers N1 and N2
 * Output: All primes in range [N1, N2]
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n1, n2;
    cin >> n1 >> n2;
    
    for (long long num = n1; num <= n2; num++) {
        if (num < 2) continue;
        
        bool isPrime = true;
        
        if (num == 2) {
            isPrime = true;
        } else if (num % 2 == 0) {
            isPrime = false;
        } else {
            long long limit = sqrt(num);
            for (long long i = 3; i <= limit; i += 2) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime) {
            cout << num << " ";
        }
    }
    
    return 0;
}
