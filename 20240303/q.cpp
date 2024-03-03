#include <iostream>
#include <vector>

using namespace std;

vector<int> findFactors(int num) {
    vector<int> factors;
    factors.push_back(1); // 1 是所有正整数的因子

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            factors.push_back(i);
            if (i != num / i) {
                factors.push_back(num / i);
            }
        }
    }

    return factors;
}

bool isPerfectNumber(int num) {
    vector<int> factors = findFactors(num);
    int sum = 0;
    for (int factor : factors) {
        sum += factor;
    }
    return sum == num;
}

int main() {
    int n;
    while (cin >> n) {
        cout << n << ":";
        for (int i = 2; i <= n; ++i) {
            if (isPerfectNumber(i)) {
                cout << " " << i;
            }
        }
        cout << endl;
    }

    return 0;
}
