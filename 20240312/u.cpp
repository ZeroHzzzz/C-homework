#include <cmath>
#include <iostream>

int main() {
    while (true) {
        int n;
        std::cin >> n;
        if (n == 0) {
            break;
        }

        int count = 0;
        while (n > 0) {
            // 找到当前数能够表示的最大的 2 的幂次方
            int power = std::log2(n);
            // 减去当前的 2 的幂次方
            n -= std::pow(2, power);
            // 记录使用的 2 的幂次方个数
            count++;
        }

        std::cout << count << std::endl;
    }

    return 0;
}
