/*
 * Task 59: LCM of All Numbers from 1 to N
 * Input: Natural number N (1 <= N <= 100)
 * Output: LCM(1, 2, 3, ..., N)
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long result = 1;
    
    for (int i = 2; i <= n; i++) {
        long long a = result;
        long long b = i;
        
        // Find GCD using Euclidean algorithm
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        long long gcd = a;
        
        // Calculate LCM and accumulate
        result = (result / gcd) * i;
    }
    
    cout << result;
    return 0;
}
