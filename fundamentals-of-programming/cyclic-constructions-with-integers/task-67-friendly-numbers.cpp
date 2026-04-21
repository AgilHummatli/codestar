/*
 * Task 67: Find Friendly (Amicable) Numbers
 * Input: Two numbers M and N
 * Output: All amicable pairs (A, B) in range [M, N]
 * Formula: sum_divisors(A) = B AND sum_divisors(B) = A
 */

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    
    for (int a = m; a <= n; a++) {
        // Calculate sum of proper divisors of a
        int sumA = 0;
        
        for (int i = 1; i * i <= a; i++) {
            if (a % i == 0) {
                if (i != a) {  // Exclude a itself
                    sumA += i;
                }
                
                if (i != a / i && a / i != a) {  // Add pair, avoid duplicates and a itself
                    sumA += a / i;
                }
            }
        }
        
        int b = sumA;
        
        // Check if b is in range and different from a
        if (b > a && b >= m && b <= n) {
            // Calculate sum of proper divisors of b
            int sumB = 0;
            
            for (int i = 1; i * i <= b; i++) {
                if (b % i == 0) {
                    if (i != b) {
                        sumB += i;
                    }
                    
                    if (i != b / i && b / i != b) {
                        sumB += b / i;
                    }
                }
            }
            
            // Check if they are amicable
            if (sumB == a) {
                cout << "(" << a << ", " << b << ")" << endl;
            }
        }
    }
    
    return 0;
}
