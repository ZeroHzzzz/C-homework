#include <iostream>
#include <iomanip>

using namespace std;

double calculatePi(int n) {
    double pi = 0.0;
    double sign = 1.0;
    double denominator = 1.0;

    for (int i = 0; i < n; ++i) {
        pi += sign / denominator;
        sign = -sign;
        denominator += 2;
    }

    return pi * 4;
}

int main() {
    int n;
    cin >> n;

    double result = calculatePi(n);

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}
