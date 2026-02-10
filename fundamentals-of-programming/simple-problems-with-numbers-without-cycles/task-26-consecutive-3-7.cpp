/*
 * Task 26: Check for Consecutive 3 and 7
 * Input: Four-digit integer (1000-9999)
 * Output: "Consecutive Digits Found" or "Consecutive Digits Not Found"
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    bool flag = false;
    
    while (number > 0) {
        if ((number % 10 == 7) && ((number / 10) % 10) == 3) {
            flag = true;
            break;
        }
        number = number / 10;
    }
    
    if (flag) {
        cout << "Consecutive Digits Found";
    } else {
        cout << "Consecutive Digits Not Found";
    }
    
    return 0;
}
