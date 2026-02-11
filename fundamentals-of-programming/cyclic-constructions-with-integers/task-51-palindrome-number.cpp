/*
 * Task 51: Check if Number is Palindrome
 * Input: Natural number N
 * Output: "YES" if palindrome, "NO" otherwise
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int original = number;
    int reversed = 0;
    
    while (number > 0) {
        reversed = reversed * 10 + (number % 10);
        number = number / 10;
    }
    
    if (original == reversed) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
