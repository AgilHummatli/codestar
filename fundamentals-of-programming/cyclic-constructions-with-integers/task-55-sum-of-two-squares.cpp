/*
 * Task 55: Check if Sum of Two Distinct Squares
 * Input: Natural number N
 * Output: "YES" if N = a² + b² (a ≠ b), else "NO"
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    bool found = false;
    long long limit = sqrt(n);
    
    for (long long a = 1; a <= limit && !found; a++) {
        long long a_squared = a * a;
        long long remaining = n - a_squared;
        
        // Check if remaining is a perfect square
        long long b = sqrt(remaining);
        
        if (b * b == remaining && b != a && b > 0) {
            found = true;
        }
    }
    
    if (found) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
