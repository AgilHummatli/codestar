/*
 * Task 4: Check if Number is Even
 * Input: An integer
 * Output: "The number is even." or "The number is not even."
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    if (number % 2 == 0) {
        cout << "The number is even.";
    } else {
        cout << "The number is not even.";
    }
    
    return 0;
}
