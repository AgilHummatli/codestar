/*
 * Task 32: Conditional Modification of Three Numbers
 * Input: Three real numbers (X, Y, Z)
 * Output: Modified values based on condition Z ≥ Y ≥ X
 * If true: double all values
 * If false: convert to absolute values
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double x, y, z;
    cin >> x >> y >> z;
    
    if (z >= y && y >= x) {
        x = x * 2;
        y = y * 2;
        z = z * 2;
    } else {
        x = abs(x);
        y = abs(y);
        z = abs(z);
    }
    
    cout << x << " " << y << " " << z;
    return 0;
}
