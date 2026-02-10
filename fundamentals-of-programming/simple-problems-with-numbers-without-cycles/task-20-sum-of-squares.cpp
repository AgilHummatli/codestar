/*
 * Task 20: Sum of Squares of Digits
 * Input: Five-digit integer (10000-99999)
 * Output: Sum of squares of all digits
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int sum = 0;
    int i = 0;
    
    while (i < 5) {
        sum = sum + pow((number % 10), 2);
        number = number / 10;
        i++;
    }
    
    cout << sum;
    return 0;
}
