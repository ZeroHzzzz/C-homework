#include <cmath>
#include <iostream>
#include <map>

int countDigits(long long n) {
    // 计算整数的位数
    if (n == 0) {
        return 1;  // 对于 0，特殊处理为 1 位
    }
    return static_cast<int>(std::log10(n)) + 1;
}

int main() {
    long long n;
    std::cin >> n;

    std::map<int, int> digitCounts;

    // 统计每种位数的出现次数
    for (int i = 0; i < n; ++i) {
        long long num;
        std::cin >> num;
        int digits = countDigits(num);
        digitCounts[digits]++;
    }

    // 输出结果
    for (const auto& pair : digitCounts) {
        std::cout << pair.first << ":" << pair.second << std::endl;
    }

    return 0;
}
