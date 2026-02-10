/*
 * Task 25: Check if Digit 3 is Present
 * Input: Four-digit integer (1000-9999)
 * Output: "Digit 3 Found" or "Digit 3 Not Found"
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int d1 = number / 1000;
    int d2 = (number / 100) % 10;
    int d3 = (number / 10) % 10;
    int d4 = number % 10;
    
    if (d1 == 3 || d2 == 3 || d3 == 3 || d4 == 3) {
        cout << "Digit 3 Found";
    } else {
        cout << "Digit 3 Not Found";
    }
    
    return 0;
}
