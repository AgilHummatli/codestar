/*
 * Task 35: Conditional Zero Replacement
 * Input: Two real numbers (X, Y)
 * Output: If X ≤ Y, replace X with 0; otherwise unchanged
 */

#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    
    if (x <= y) {
        x = 0;
    }
    
    cout << x << " " << y;
    return 0;
}
