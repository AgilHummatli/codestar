/*
 * Problem:
 * Given a square matrix of order n, find the sum of the elements on the main diagonal
 * and the sum of the elements on the secondary diagonal.
 *
 * Input:
 *  - First line: integer n (order of the square matrix)
 *  - Next n lines: n integers each (matrix elements)
 *
 * Output:
 *  - Two integers separated by a space:
 *    (sum of main diagonal, sum of secondary diagonal)
 *
 * Example:
 * Input:
 * 3
 * 1 3 2
 * 5 0 7
 * 9 6 4
 *
 * Output:
 * 5 11
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100][100];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < n; i++) {
        sum1 += arr[i][i];           // main diagonal
        sum2 += arr[i][n - 1 - i];   // secondary diagonal
    }

    cout << sum1 << " " << sum2;

    return 0;
}
