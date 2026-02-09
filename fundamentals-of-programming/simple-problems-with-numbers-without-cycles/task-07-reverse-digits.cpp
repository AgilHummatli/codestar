/*
 * Task 7: Reverse Two-Digit Number
 * Input: Two-digit integer (10-99)
 * Output: Number with digits reversed
 * Note: If last digit is 0, result is single digit (40 → 4)
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int newNumber;
    
    if (number % 10 == 0) {
        newNumber = number / 10;
    } else {
        newNumber = (number % 10) * 10 + (number / 10);
    }
    
    cout << newNumber;
    return 0;
}
