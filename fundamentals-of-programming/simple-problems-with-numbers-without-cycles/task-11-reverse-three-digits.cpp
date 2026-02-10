/*
 * Task 11: Reverse Three-Digit Number
 * Input: Three-digit integer (100-999)
 * Output: Number with digits reversed
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int reverse;
    reverse = ((number % 10) * 100) + (((number / 10) % 10) * 10) + (number / 100);
    cout << reverse;
    
    return 0;
}
