/*
 * Task 50: Count Odd Digits
 * Input: Natural number N
 * Output: Number of odd digits
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int count = 0;
    
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 != 0) {
            count++;
        }
        number = number / 10;
    }
    
    cout << count;
    return 0;
}
