/*
 * Task 36: Print Numbers in Interval (1, 3)
 * Input: Three real numbers (A, B, C)
 * Output: Numbers in range (1, 3) or "No Numbers Found"
 */

#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    
    bool found = false;
    
    if (a > 1 && a < 3) {
        cout << a;
        found = true;
    }
    
    if (b > 1 && b < 3) {
        if (found) cout << " ";
        cout << b;
        found = true;
    }
    
    if (c > 1 && c < 3) {
        if (found) cout << " ";
        cout << c;
        found = true;
    }
    
    if (!found) {
        cout << "No Numbers Found";
    }
    
    return 0;
}
