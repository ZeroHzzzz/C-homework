#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    double result = 0.0;

    for (int i = 0; i < n; ++i) {
        result += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
    }

    result *= 4;

    cout << fixed << setprecision(10) <<  result << endl;

    return 0;
}