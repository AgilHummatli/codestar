/*
 * Task 52: Find Maximum Digit
 * Input: Natural number N
 * Output: Maximum digit in the number
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int maxDigit = 0;
    
    while (number > 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number = number / 10;
    }
    
    cout << maxDigit;
    return 0;
}
