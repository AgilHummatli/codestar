/*
 * Task 2: Swap Two Integers
 * Input: Two integers (e.g., 5 8)
 * Output: Swapped values (e.g., 8 5)
 */

#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cin >> number1 >> number2;
    
    int temp = number1;
    number1 = number2;
    number2 = temp;
    
    cout << number1 << ' ' << number2;
    return 0;
}
