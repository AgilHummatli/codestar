// Task 1: Print Number with Spaces
// Input: Three-digit number (e.g., 456)
// Output: Digits separated by spaces (e.g., 4 5 6)

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int digit;
    digit = number / 100;
    cout << digit << ' ';
    
    digit = (number / 10) % 10;
    cout << digit << ' ';
    
    digit = number % 10;
    cout << digit;
  
    return 0;
}
