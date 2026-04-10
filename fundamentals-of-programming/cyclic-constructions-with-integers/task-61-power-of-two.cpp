/*
 * Task 61: Check if Number is Power of 2
 * Input: Natural number N
 * Output: "Yes" if N = 2^k, else "No"
 * Method: Keep dividing by 2, check if we reach 1
 */

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    if (n == 0) {
        cout << "No";
        return 0;
    }
    
    while (n % 2 == 0) {
        n = n / 2;
    }
    
    if (n == 1) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}
