/*
 * Task 57: Find GCD (Greatest Common Divisor)
 * Input: Two natural numbers A and B
 * Output: GCD of A and B
 * Algorithm: Euclidean method
 */

#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    
    cout << a;
    return 0;
}
