/*
 * Task 30: Find Maximum of Three Real Numbers
 * Input: Three real numbers (X, Y, Z)
 * Output: Maximum of the three numbers
 */

#include <iostream>
using namespace std;

int main() {
    double x, y, z;
    cin >> x >> y >> z;
    
    double max = x;
    
    if (y > max) {
        max = y;
    }
    if (z > max) {
        max = z;
    }
    
    cout << max;
    return 0;
}
