/*
 * Problem:
 * Given a natural number N, find and print all of its divisors in ascending order.
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int i = 1;
    while (i <= number) {
        if (number % i == 0) {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}
