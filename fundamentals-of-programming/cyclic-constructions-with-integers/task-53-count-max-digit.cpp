/*
 * Task 53: Count Occurrences of Maximum Digit
 * Input: Natural number N
 * Output: How many times the max digit appears
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int max = 0;
    int counter = 0;
    
    while (number > 0) {
        int digit = number % 10;
        
        if (digit > max) {
            max = digit;
            counter = 1;  // New max, reset count
        } else if (digit == max) {
            counter++;    // Same max, increment
        }
        
        number = number / 10;
    }
    
    cout << counter;
    return 0;
}
