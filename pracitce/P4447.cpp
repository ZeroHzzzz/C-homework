#include <algorithm>
#include <cstdio>
using namespace std;
int n;
int a[100010];
int cnt;
struct node {
    int num, v;
} tong[100010];
int d[100010];
int l = 1, r;
int ans = 1e9;
int len[100010], tot;
int lowbit(int x) {
    return x & -x;
}
int min(int a, int b) {
    return a < b ? a : b;
}
void update(int x, int v) {
    while (x <= cnt) {
        d[x] += v;
        x += lowbit(x);
    }
}
int query(int x) {
    int res = 0;
    while (x) {
        res += d[x];
        x -= lowbit(x);
    }
    return res;
}
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) {
        if (a[i - 1] == a[i]) {
            tong[cnt].v++;
        } else {
            tong[++cnt].num = a[i];
            tong[cnt].v++;
        }
    }
    for (int i = 2; i <= cnt + 1; i++) {
        if (tong[i].num != tong[i - 1].num + 1) {
            len[++tot] = i - 1;
        }
    }
    for (int i = 1; i <= cnt; i++) {
        update(i, tong[i].v);
        update(i + 1, -tong[i].v);
    }
    for (int i = 1; i <= tot; i++) {
        l = len[i - 1] + 1;
        r = len[i];
        for (int j = l + 1; j <= len[i]; j++) {
            if (tong[j].v < tong[j - 1].v) {
                r = j - 1;
                break;
            }
        }
        while (l <= r && l <= len[i]) {
            ans = min(ans, r - l + 1);
            update(l, -1);
            update(r + 1, 1);
            while (!query(l)) {
                l++;
            }
            if (r == len[i]) {
                continue;
            }
            while (query(r) <= query(r + 1)) {
                if (r == len[i]) {
                    break;
                }
                r++;
            }
        }
    }
    printf("%d", ans);
    return 0;
}