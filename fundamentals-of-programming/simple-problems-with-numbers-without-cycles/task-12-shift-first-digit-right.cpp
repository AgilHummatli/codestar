/*
 * Task 12: Shift First Digit to Right
 * Input: Three-digit integer (100-999)
 * Output: First digit moved to last position
 * Example: 345 → 453 (3 moves to end)
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int changed;
    changed = (((number / 10) % 10) * 100) + ((number % 10) * 10) + (number / 100);
    cout << changed;
    
    return 0;
}
