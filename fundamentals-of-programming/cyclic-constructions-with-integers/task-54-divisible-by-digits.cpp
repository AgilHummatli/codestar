/*
 * Task 54: Numbers Divisible by All Their Digits
 * Input: Natural number N (N < 1000)
 * Output: All numbers ≤ N divisible by each digit
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        int num = i;
        bool divisible = true;
        
        while (num > 0) {
            int digit = num % 10;
            
            if (digit == 0 || i % digit != 0) {
                divisible = false;
                break;
            }
            
            num = num / 10;
        }
        
        if (divisible) {
            cout << i << " ";
        }
    }
    
    return 0;
}
