/*
 * Task 29: Check if Divisible by All Digits
 * Input: Four-digit integer (1000-9999)
 * Output: "Divisible by All Digits" or "Not Divisible by All Digits"
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int original = number;
    bool divisible = true;
    
    while (number > 0) {
        int digit = number % 10;
        
        if (digit == 0 || original % digit != 0) {
            divisible = false;
            break;
        }
        
        number = number / 10;
    }
    
    if (divisible) {
        cout << "Divisible by All Digits";
    } else {
        cout << "Not Divisible by All Digits";
    }
    
    return 0;
}
