/*
 * Task 23: Check for Identical Digits
 * Input: Five-digit integer
 * Output: "Identical Digits Found" or "No Identical Digits"
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int d1 = number / 10000;
    int d2 = (number / 1000) % 10;
    int d3 = (number / 100) % 10;
    int d4 = (number / 10) % 10;
    int d5 = number % 10;
    
    if (d1 == d2 || d1 == d3 || d1 == d4 || d1 == d5 ||
        d2 == d3 || d2 == d4 || d2 == d5 ||
        d3 == d4 || d3 == d5 ||
        d4 == d5) {
        cout << "Identical Digits Found";
    } else {
        cout << "No Identical Digits";
    }
    
    return 0;
}
