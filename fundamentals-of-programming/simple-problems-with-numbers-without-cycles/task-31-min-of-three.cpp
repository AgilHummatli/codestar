/*
 * Task 31: Find Minimum of Three Real Numbers
 * Input: Three real numbers (X, Y, Z)
 * Output: Minimum of the three numbers
 */

#include <iostream>
using namespace std;

int main() {
    double x, y, z;
    cin >> x >> y >> z;
    
    double min = x;
    
    if (y < min) {
        min = y;
    }
    if (z < min) {
        min = z;
    }
    
    cout << min;
    return 0;
}
