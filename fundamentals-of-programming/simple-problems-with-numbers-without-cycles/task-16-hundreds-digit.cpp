/*
 * Task 16: Find Hundreds Digit
 * Input: Integer greater than 999
 * Output: The hundreds place digit
 * Example: 1352 → 3 (hundreds digit)
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    cout << (number / 100) % 10;
    return 0;
}
