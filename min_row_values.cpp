/*
 * Problem:
 * Given a matrix of size n × m, calculate the smallest element in each row 
 * and create a one-dimensional array where each element is equal to the smallest 
 * element in the corresponding row of the matrix.
 *
 * Input:
 *  - First line: two integers n and m (rows and columns)
 *  - Next n lines: m integers each (matrix elements)
 *
 * Output:
 *  - n integers (smallest element of each row), separated by spaces
 *
 * Example:
 * Input:
 * 3 4
 * 5 2 9 4
 * 8 1 7 3
 * 6 10 11 12
 *
 * Output:
 * 2 1 6
 */

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[100][100];
    int minRow[100];

    for(int i = 0; i < n; i++){
        cin >> arr[i][0];
        int smallest = arr[i][0];

        for(int j = 1; j < m; j++){
            cin >> arr[i][j];
            if(arr[i][j] < smallest){
                smallest = arr[i][j];
            }
        }

        minRow[i] = smallest;
    }

    for(int i = 0; i < n; i++){
        cout << minRow[i] << " ";
    }

    return 0;
}
