/*
 * Task 39: Check if Remainder Equals R or S
 * Input: Four integers (A, B, R, S)
 * Output: "Yes" if A % B equals R or S, otherwise "No"
 */

#include <iostream>
using namespace std;

int main() {
    int a, b, r, s;
    cin >> a >> b >> r >> s;
    
    int remainder = a % b;
    
    if (remainder == r || remainder == s) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}
