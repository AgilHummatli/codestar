/*
 * Task 3: Redistribute X and Y (Max and Min)
 * Input: Two integers X and Y
 * Output: X = max, Y = min
 */

#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cin >> number1 >> number2;
    
    if (number1 < number2) {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }
    
    cout << number1 << ' ' << number2;
    return 0;
}
