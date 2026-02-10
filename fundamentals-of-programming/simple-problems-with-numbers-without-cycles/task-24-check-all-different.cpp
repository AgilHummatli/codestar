/*
 * Task 24: Check if All Digits are Different
 * Input: Four-digit integer (1000-9999)
 * Output: "All Digits are Different" or "Duplicate Digits Found"
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
    
    if (d1 == d2 || d1 == d3 || d1 == d4 ||
        d2 == d3 || d2 == d4 ||
        d3 == d4) {
        cout << "Duplicate Digits Found";
    } else {
        cout << "All Digits are Different";
    }
