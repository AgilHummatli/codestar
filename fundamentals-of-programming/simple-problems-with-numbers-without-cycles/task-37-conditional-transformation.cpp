/*
 * Task 37: Conditional Transformation of Four Numbers
 * Input: Four real numbers (A, B, C, D)
 * Output: Modified values based on conditions:
 * - If D ≤ C ≤ B ≤ A: replace all with max
 * - If A < B < C < D: leave unchanged
 * - Otherwise: replace all with squares
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if (d <= c && c <= b && b <= a) {
        // Replace all with max (which is a)
        b = a;
        c = a;
        d = a;
    } else if (a < b && b < c && c < d) {
        // Leave unchanged
    } else {
        // Replace with squares
        a = pow(a, 2);
        b = pow(b, 2);
        c = pow(c, 2);
        d = pow(d, 2);
    }
    
    cout << a << " " << b << " " << c << " " << d;
    return 0;
}
