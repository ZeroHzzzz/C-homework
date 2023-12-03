#include <iostream>
using namespace std;

int count = 0;

void check(int n, int a[], bool chosen[], int index) {
    if (index == n) {
        int x = 0;
        for (int i = 0; i < n; i++) {
            if (chosen[i]) x++;
        }
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (!chosen[i] && a[i] <= x) {
                ok = false;
                break;
            }
            if (chosen[i] && a[i] >= x) {
                ok = false;
                break;
            }
        }
        if (ok) count++;
        return;
    }
    chosen[index] = true;
    check(n, a, chosen, index + 1);
    chosen[index] = false;
    check(n, a, chosen, index + 1);
}

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool chosen[n];
        count = 0;
        check(n, a, chosen, 0);
        cout << count << endl;
    }
    return 0;
}
