/*
 * Task 49: Sum of Digits
 * Input: Natural number N
 * Output: Sum of all digits
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
    
    cout << sum;
    return 0;
}
