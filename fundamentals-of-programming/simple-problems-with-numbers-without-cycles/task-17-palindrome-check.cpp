/*
 * Task 17: Check if Four-Digit Number is Palindrome
 * Input: Four-digit integer (1000-9999)
 * Output: "Palindrome" or "Not Palindrome"
 * 
 * Palindrome: Reads same forward and backward
 * Example: 2332 → Palindrome (2 3 3 2)
 *          1234 → Not Palindrome
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    if ((number / 1000) == (number % 10) && 
        ((number / 100) % 10) == ((number / 10) % 10)) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
    
    return 0;
}
