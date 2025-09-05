/*
 * Problem:
 * Given a sequence of integers, find the length of the section 
 * with the maximum number of consecutive zeros.
 *
 * Input:
 *  - First line: integer N (size of sequence)
 *  - Second line: N space-separated integers
 *
 * Output:
 *  - Length of the maximum consecutive zeros
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxCount = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            count++;
            if(count > maxCount) {
                maxCount = count;
            }
        } else {
            count = 0;  
        }
    }

    cout << "Length of Maximum Consecutive Zeros: " << maxCount;

    return 0;
}
