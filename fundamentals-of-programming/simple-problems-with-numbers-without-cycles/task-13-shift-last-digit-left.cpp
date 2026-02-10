/*
 * Task 13: Shift Last Digit to Left
 * Input: Three-digit integer (100-999)
 * Output: Last digit moved to first position
 * Example: 123 → 312 (3 moves to front)
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int changed;
    changed = ((number % 10) * 100) + ((number / 100) * 10) + ((number / 10) % 10);
    cout << changed;
    
    return 0;
}
