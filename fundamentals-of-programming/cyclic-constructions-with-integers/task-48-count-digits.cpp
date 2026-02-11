/*
 * Task 48: Count Digits in a Number
 * Input: Natural number N
 * Output: Number of digits
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int counter = 0;
    
    while (number > 0) {
        number = number / 10;
        counter++;
    }
    
    cout << counter;
    return 0;
}
