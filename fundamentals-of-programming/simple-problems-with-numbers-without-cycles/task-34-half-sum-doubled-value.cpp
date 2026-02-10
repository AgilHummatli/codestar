/*
 * Task 34: Replace with Half-Sum and Doubled Value
 * Input: Two real numbers (X, Y) where Y ≠ X
 * Output: Smaller → (X+Y)/2, Larger → Larger*2
 */

#include <iostream>
using namespace std;

int main() {
    double number1, number2;
    cin >> number1 >> number2;
    
    double temp;
    
    if (number1 > number2) {
        temp = number1;
        number1 = number1 * 2;
        number2 = (temp + number2) / 2;
    } else {
        temp = number2;
        number2 = number2 * 2;
        number1 = (temp + number1) / 2;
    }
    
    cout << number1 << " " << number2;
    return 0;
}
