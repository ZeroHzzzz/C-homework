#include <iostream>
#include <vector>

bool numsum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 2 == 1;
}

std::vector<int> 数位相加和为奇数的数过滤(const std::vector<int>& arr) {
    std::vector<int> 过滤后的数组;
    for (int num : arr) {
        if (!numsum(num)) {
            过滤后的数组.push_back(num);
        }
    }
    return 过滤后的数组;
}

int main() {
    // 举个例子
    std::vector<int> 原始数组 = {12, 34, 56, 78, 91};
    std::vector<int> 结果数组 = 数位相加和为奇数的数过滤(原始数组);

    // 输出结果数组
    for (int num : 结果数组) {
        std::cout << num << " ";
    }

    return 0;
}
