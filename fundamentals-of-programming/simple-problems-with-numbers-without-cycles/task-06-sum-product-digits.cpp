/*
 * Task 6: Sum and Product of Digits
 * Input: Two-digit integer (10-99)
 * Output: Sum and product of its digits
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int sum = (number / 10) + (number % 10);
    int product = (number / 10) * (number % 10);
    
    cout << "Sum of the digits: " << sum << endl;
    cout << "Product of the digits: " << product << endl;
    
    return 0;
}
