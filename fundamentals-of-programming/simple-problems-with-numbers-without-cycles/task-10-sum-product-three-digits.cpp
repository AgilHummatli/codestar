/*
 * Task 10: Sum and Product of Three Digits
 * Input: Three-digit integer (100-999)
 * Output: Sum and product of all digits
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int first = number / 100;
    int middle = (number / 10) % 10;
    int last = number % 10;
    
    cout << "Sum of the digits: " << first + middle + last << endl;
    cout << "Product of the digits: " << first * middle * last << endl;
    
    return 0;
}
