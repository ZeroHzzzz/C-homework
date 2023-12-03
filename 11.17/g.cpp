#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 100005;

vector<int> tree[MAXN];
int permutation[MAXN];
int parent[MAXN];
int depth[MAXN];

void dfs(int v, int p, int d) {
    parent[v] = p;
    depth[v] = d;
    for (int u : tree[v]) {
        if (u != p) {
            dfs(u, v, d + 1);
        }
    }
}

bool isDescendant(int x, int l, int r) {
    return (depth[x] >= l && depth[x] <= r);
}

bool checkDescendant(int x, int l, int r) {
    int v = permutation[x - 1];
    return isDescendant(v, l, r);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        for (int i = 1; i <= n; ++i) {
            tree[i].clear();
        }

        for (int i = 1; i < n; ++i) {
            int u, v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        for (int i = 0; i < n; ++i) {
            cin >> permutation[i];
        }

        dfs(1, 0, 0);

        for (int i = 0; i < q; ++i) {
            int l, r, x;
            cin >> l >> r >> x;

            if (checkDescendant(x, l, r)) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }

    return 0;
}
