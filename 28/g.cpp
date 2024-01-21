#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

int main() {
    int n;
    std::cin >> n;

    std::vector<int> result;
    result.push_back(1);
    result.push_back(1);

    for (int i = 2; i <= 1000; ++i) {
        long long next_num = (static_cast<long long>(result[i - 1]) * result[i - 2] + 1) % MOD;
        result.push_back(static_cast<int>(next_num));
    }

    for (int i = 0; i < n; ++i) {
        int m;
        std::cin >> m;
        std::cout << result[m - 1] << std::endl;
    }

    return 0;
}
