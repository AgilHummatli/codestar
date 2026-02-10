/*
 * Task 14: Swap Hundreds and Tens Digits
 * Input: Three-digit integer (100-999)
 * Output: Swap first two digits, keep last digit same
 * Example: 123 → 213 (swap 1 and 2, keep 3)
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int changed;
    changed = (((number / 10) % 10) * 100) + ((number / 100) * 10) + (number % 10);
    cout << changed;
    
    return 0;
}
