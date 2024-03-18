#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
double maxn(double a, double b) {
    return a > b ? a : b;
}
int main() {
    int n;
    while (cin >> n) {
        double a, b;
        double maxn = -1;
        for (int i = 1; i <= n; i++) {
            cin >> a >> b;
            maxn = max(a * a + b * b, maxn);
        }
        cout << fixed << setprecision(2) << sqrt(maxn) << endl;
    }
    return 0;
}