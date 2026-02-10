/*
 * Task 22: Reverse Five-Digit Number
 * Input: Five-digit integer (10000-99999)
 * Output: Number with digits reversed
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int reversed = 0;
    
    while (number > 0) {
        reversed = reversed * 10 + (number % 10);
        number = number / 10;
    }
    
    cout << reversed;
    return 0;
}
