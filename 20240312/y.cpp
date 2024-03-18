#include <iomanip>
#include <iostream>
using namespace std;
int max(int x, int y) {
    return x > y ? x : y;
}
int main() {
    int n;
    while (cin >> n) {
        int dp[40][100] = {0};
        string tmp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            for (int j = 0; j < 2 * i + 1; j++) {
                dp[i][j + n - i - 1] = tmp[j] - '0';
            }
        }
        if (n == 1) {
            cout << tmp << endl;
            continue;
        }
        for (int i = n - 2; i >= 0; i--) {
            for (int j = n - 1 - i; j <= n - 1 + i; j++) {
                dp[i][j] +=
                    max(dp[i + 1][j], max(dp[i + 1][j - 1], dp[i + 1][j + 1]));
            }
        }
        cout << dp[0][n - 1] << endl;
    }

    return 0;
}