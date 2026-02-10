/*
 * Task 18: Difference Between First Two and Last Two Digits
 * Input: Five-digit integer (10000-99999)
 * Output: (sum of first 2 digits) - (sum of last 2 digits)
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int difference = (((number / 10000) + ((number / 1000) % 10)) - 
                      (((number / 10) % 10) + (number % 10)));
    cout << difference;
    
    return 0;
}
