/*
 * Task 56: All Numbers as Sum of Two Squares (with pairs)
 * Input: Natural number N (N <= 1000)
 * Output: All pairs (a, b) where a² + b² ≤ N
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int limit = sqrt(n);
    
    for (int i = 1; i <= limit; i++) {
        for (int j = i + 1; j <= limit; j++) {
            int sum = i * i + j * j;
            if (sum <= n) {
                cout << i << "^2 + " << j << "^2 = " << sum << endl;
            }
        }
    }
    
    return 0;
}
```

---

## **Output for N=1000:**
```
1^2 + 2^2 = 5
1^2 + 3^2 = 10
1^2 + 4^2 = 17
...
21^2 + 23^2 = 970
