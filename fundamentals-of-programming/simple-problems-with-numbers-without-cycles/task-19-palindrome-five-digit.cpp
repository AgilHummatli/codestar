/*
 * Task 19: Check if Five-Digit Number is Palindrome
 * Input: Five-digit integer (10000-99999)
 * Output: "Palindrome" or "Not Palindrome"
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    if ((number / 10000) == (number % 10) && 
        ((number / 1000) % 10) == ((number / 10) % 10)) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
    
    return 0;
}
