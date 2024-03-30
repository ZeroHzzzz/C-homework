#include <algorithm>
#include <iostream>
using namespace std;
long long n, mp[10010];
long long nmp[10010];
bool cmp(long long a, long long b) {
    return a > b;
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> mp[i];
    sort(mp + 1, mp + 1 + n, cmp);
    int l = 1, r = n, ind = 1;
    nmp[0] = 0;
    while (l < r) {
        nmp[ind] = mp[l];
        ind++;
        nmp[ind] = mp[r];
        ind++;

        l++;
        r--;
    }
    if (n % 2 == 1)
        nmp[ind++] = mp[n / 2 + 1];
    long long ans = 0;
    for (int i = 1; i < ind; i++) {
        ans += (nmp[i] - nmp[i - 1]) * (nmp[i] - nmp[i - 1]);
    }
    cout << ans;
    return 0;
}