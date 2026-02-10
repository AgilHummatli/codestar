/*
 * Task 28: Check if Sum of Digits is Multiple of 2 and 3
 * Input: Four-digit integer (1000-9999)
 * Output: "Multiple of 2 and 3" or "Not a Multiple of 2 and 3"
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int sum = 0;
    
    while (number > 0) {
        sum = sum + (number % 10);
        number = number / 10;
    }
    
    if (sum % 2 == 0 && sum % 3 == 0) {
        cout << "Multiple of 2 and 3";
    } else {
        cout << "Not a Multiple of 2 and 3";
    }
    
    return 0;
}
