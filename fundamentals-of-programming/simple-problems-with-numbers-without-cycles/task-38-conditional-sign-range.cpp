/*
 * Task 38: Conditional Transformation Based on Sign and Range
 * Input: Two real numbers (X, Y)
 * Output: Modified values based on conditions:
 * - Both negative: absolute values
 * - Only one negative: increase both by 0.5
 * - Both non-negative but outside [0.5, 2.0]: divide by 10
 * - Otherwise: unchanged
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    
    if (x < 0 && y < 0) {
        x = abs(x);
        y = abs(y);
    } else if ((x < 0 && y >= 0) || (x >= 0 && y < 0)) {
        x = x + 0.5;
        y = y + 0.5;
    } else if (x >= 0 && y >= 0) {
        if (!((x >= 0.5 && x <= 2.0) && (y >= 0.5 && y <= 2.0))) {
            x = x / 10;
            y = y / 10;
        }
    }
    
    cout << x << " " << y;
    return 0;
}
