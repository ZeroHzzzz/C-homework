#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x, a, y, b;
    cin >> x >> a >> y >> b;
    double v = (a * x - b * y) / (a - b);

    cout << fixed << setprecision(2) << v << endl;

    return 0;
}
