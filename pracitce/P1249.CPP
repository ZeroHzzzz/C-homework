#include <cstdio>
#include <iostream>
using namespace std;
const int L = 500;
string mul(string a, string b) {
    string s;
    int na[L], nb[L], nc[L], La = a.size(), Lb = b.size();
    fill(na, na + L, 0);
    fill(nb, nb + L, 0);
    fill(nc, nc + L, 0);
    for (int i = La - 1; i >= 0; i--)
        na[La - i] = a[i] - '0';
    for (int i = Lb - 1; i >= 0; i--)
        nb[Lb - i] = b[i] - '0';
    for (int i = 1; i <= La; i++)
        for (int j = 1; j <= Lb; j++)
            nc[i + j - 1] += na[i] * nb[j];
    for (int i = 1; i <= La + Lb; i++)
        nc[i + 1] += nc[i] / 10, nc[i] %= 10;
    if (nc[La + Lb])
        s += nc[La + Lb] + '0';
    for (int i = La + Lb - 1; i >= 1; i--)
        s += nc[i] + '0';
    return s;
}
string f(int x) {
    int i = 0, j;
    string p = "";
    char ch[10], t;
    do {
        ch[i] = x % 10 + '0';
        x /= 10;
        i++;
    } while (x != 0);
    ch[i] = '\0';
    for (j = 0, i--; j <= i / 2; j++, i--) {
        t = ch[j];
        ch[j] = ch[i];
        ch[i] = t;
    }
    return ch;
}
int n, c = 1, ans[1001];
string s[1001], m = "1";
int main() {
    scanf("%d", &n);
    if (n <= 4) {
        printf("%d\n%d\n", n, n);
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        if (n >= i)
            n -= i, ans[c++] = i, s[c - 1] = f(i);
        else
            break;
    }
    for (int i = c - 1; i >= 1; i--)
        if (n > 0)
            ans[i]++, s[i] = f(ans[i]), n--;
    if (n > 0)
        ans[c - 1]++, s[c - 1] = f(ans[c - 1]);
    for (int i = 1; i < c; i++) {
        cout << ans[i] << " ";
        m = mul(s[i], m);
    }
    cout << endl << m;
    return 0;
}
