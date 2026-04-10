/*
 * Task 62: Check if Number is Prime
 * Input: Natural number N
 * Output: "Yes" if prime, else "No"
 * Prime: divisible only by 1 and itself
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    if (n <= 1) {
        cout << "No";
        return 0;
    }
    
    if (n == 2) {
        cout << "Yes";
        return 0;
    }
    
    if (n % 2 == 0) {
        cout << "No";
        return 0;
    }
    
    int limit = sqrt(n);
    
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) {
            cout << "No";
            return 0;
        }
    }
    
    cout << "Yes";
    return 0;
}
