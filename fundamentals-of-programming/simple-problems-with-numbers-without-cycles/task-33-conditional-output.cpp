/*
 * Task 33: Conditional Output Based on Comparison
 * Input: Two real numbers (A, B)
 * Output: If A > B, print A only; otherwise print both A and B
 */

#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    
    if (a > b) {
        cout << a;
    } else {
        cout << a << " " << b;
    }
    
    return 0;
}
