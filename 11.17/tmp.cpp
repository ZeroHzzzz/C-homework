#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<long long> dp(n, 0);

        dp[0] = a[0];

        for (int i = 1; i < n; ++i) {
            if ((a[i] % 2 == 0 && a[i - 1] % 2 != 0) || (a[i] % 2 != 0 && a[i - 1] % 2 == 0)) {
                dp[i] = max(a[i], dp[i - 1] + a[i]);
            } else {
                dp[i] = a[i];
            }
        }

        long long result = *max_element(dp.begin(), dp.end());
        cout << result << endl;
    }

    return 0;
}
