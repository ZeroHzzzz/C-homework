#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    int totalCost = 0;

    for (int i = 0; i < n; ++i) {
        int smsLength;
        cin >> smsLength;

        // 计算该条短信的资费
        int cost = ceil((double)smsLength / 70) * 10;
        totalCost += cost;
    }

    // 输出总资费
    cout << fixed << setprecision(1) << (double)totalCost / 100 << endl;

    return 0;
}
