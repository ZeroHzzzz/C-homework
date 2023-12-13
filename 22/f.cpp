#include <iostream>
using namespace std;
// 不知道这出题人是谁，受不了一点
double hermite(int n, double x) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return 2 * x;
    } else {
        return 2 * x * hermite(n - 1, x) - 2 * (n - 1) * hermite(n - 2, x);
    }
}

int main() {
    int n;
    double x;

    cin >> n;

    cin >> x;

    double result = hermite(n, x);

    printf("%.2lf",result);

    return 0;
}
