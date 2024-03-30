#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
long long mp[30010];
bool vis[30010];
bool cmp(int a, int b) {
    return a > b;
}
int main() {
    int w, n;
    cin >> w >> n;
    for (int i = 0; i < n; i++)
        cin >> mp[i];
    sort(mp, mp + n, cmp);
    int l = 0, r = n - 1;
    while (l < r) {
        if (mp[l] + mp[r] <= w) {
            vis[l] = 1;
            vis[r] = 1;
            l += 1;
            r -= 1;
        } else {
            l += 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        // cout << vis[i] << endl;
        if (vis[i] == 1)
            ans++;
    }
    cout << n - ans / 2;
    return 0;
}