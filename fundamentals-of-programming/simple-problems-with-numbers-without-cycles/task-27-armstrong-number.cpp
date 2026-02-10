/*
 * Task 27: Check Armstrong Number
 * Input: Four-digit integer (1000-9999)
 * Output: "Armstrong Number" or "Not Armstrong Number"
 * Armstrong: sum of 4th powers of digits equals the number
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int original = number;
    int sum = 0;
    
    while (number > 0) {
        int digit = number % 10;
        sum = sum + pow(digit, 4);
        number = number / 10;
    }
    
    if (sum == original) {
        cout << "Armstrong Number";
    } else {
        cout << "Not Armstrong Number";
    }
    
    return 0;
}
