/*
 * Task 8: Print First Digit (Hundreds)
 * Input: Three-digit integer (100-999)
 * Output: First digit (hundreds place)
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    cout << number / 100;
    return 0;
}
