/*
 * Task 68: Find All Perfect Numbers
 * Input: Natural number N
 * Output: All perfect numbers < N
 * Perfect: sum of proper divisors equals the number itself
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int num = 2; num < n; num++) {
        // Calculate sum of proper divisors
        int sum = 0;
        
        for (int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                if (i != num) {  // Exclude num itself
                    sum += i;
                }
                
                if (i != num / i && num / i != num) {  // Add pair, avoid duplicates and num
                    sum += num / i;
                }
            }
        }
        
        // Check if perfect
        if (sum == num) {
            cout << num << " ";
        }
    }
    
    return 0;
}
