/*
 * Task 21: Check Ascending Order
 * Input: Five-digit integer
 * Output: "Ascending" or "Not Ascending"
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    int i = 0;
    bool flag = true;
    
    while (i < 5) {
        if (!(number % 10 > (number / 10) % 10)) {
            flag = false;
            break;
        }
        number = number / 10;
        i++;
    }
    
    if (flag) {
        cout << "Ascending";
    } else {
        cout << "Not Ascending";
    }
    
    return 0;
}
