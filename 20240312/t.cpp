#include <algorithm>
#include <iostream>
#include <vector>

struct NumberWithLength {
    std::string number;
    int length;
};

// 自定义比较函数，按照整数长度和整数大小进行排序
bool compare(const NumberWithLength& n1, const NumberWithLength& n2) {
    if (n1.length != n2.length) {
        return n1.length < n2.length;  // 按照整数长度从小到大排序
    }
    return n1.number < n2.number;  // 如果长度相同，则按照整数大小从小到大排序
}

int main() {
    int N;
    while (std::cin >> N && N != 0) {
        std::vector<NumberWithLength> numbers;

        // 读取整数，并计算长度
        for (int i = 0; i < N; ++i) {
            std::string num;
            std::cin >> num;
            numbers.push_back({num, static_cast<int>(num.size())});
        }

        // 对整数进行排序
        std::sort(numbers.begin(), numbers.end(), compare);

        // 输出排序结果
        for (const auto& n : numbers) {
            std::cout << n.number << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
