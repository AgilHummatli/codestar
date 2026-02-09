/*
 * Task 5: Print Left and Right Digits
 * Input: Two-digit integer (10-99)
 * Output: Left digit (tens), Right digit (ones)
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    cout << "Left digit: " << number / 10 << endl;
    cout << "Right digit: " << number % 10;
    
    return 0;
}
