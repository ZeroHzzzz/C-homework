#include <iostream>
using namespace std;
const int mod = 1e9 + 7;
const int maxn = 1e5 + 10;
int dp[maxn][4];

int main() {
    int n, m;
    cin >> n >> m;
    if (n > m) swap(n, m);
    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == 0) {
                dp[i + 1][1] = (dp[i + 1][1] + dp[i][j]) % mod;
                dp[i + 1][2] = (dp[i + 1][2] + dp[i][j]) % mod;
            }
            if (j == 1) {
                dp[i + 1][0] = (dp[i + 1][0] + dp[i][j]) % mod;
                dp[i + 1][3] = (dp[i + 1][3] + dp[i][j]) % mod;
            }
            if (j == 2) {
                dp[i + 1][1] = (dp[i + 1][1] + dp[i][j]) % mod;
                dp[i + 1][3] = (dp[i + 1][3] + dp[i][j]) % mod;
            }
            if (j == 3) {
                dp[i + 1][0] = (dp[i + 1][0] + dp[i][j]) % mod;
                dp[i + 1][2] = (dp[i + 1][2] + dp[i][j]) % mod;
            }
        }
    }
    int ans = 0;
    for (int j = 0; j < 4; j++) {
        ans = (ans + dp[n][j]) % mod;
    }
    cout << ans << endl;
    return 0;
}
