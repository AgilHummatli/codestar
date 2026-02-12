/*
 * Task 58: Find LCM (Least Common Multiple)
 * Input: Two natural numbers A and B
 * Output: LCM of A and B
 * Formula: LCM(a, b) = (a * b) / GCD(a, b)
 */

#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    
    long long original_a = a;
    long long original_b = b;
    
    // Find GCD using Euclidean algorithm
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    
    long long gcd = a;
    
    // Calculate LCM using formula
    long long lcm = (original_a / gcd) * original_b;
    
    cout << lcm;
    return 0;
}
