/*
 * Task 15: Swap Tens and Ones Digits
 * Input: Three-digit integer (100-999)
 * Output: Swap last two digits, keep first digit same
 * Example: 123 → 132 (keep 1, swap 2 and 3)
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int changed;
    changed = ((number / 100) * 100) + ((number % 10) * 10) + ((number / 10) % 10);
    cout << changed;
    
    return 0;
}
