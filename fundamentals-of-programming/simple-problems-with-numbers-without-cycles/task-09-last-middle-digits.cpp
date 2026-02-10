/*
 * Task 9: Print Last and Middle Digits
 * Input: Three-digit integer (100-999)
 * Output: Last digit (units), Middle digit (tens)
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    cout << "Last digit (units): " << number % 10 << endl;
    cout << "Middle digit (tens): " << (number / 10) % 10 << endl;
    
    return 0;
}
