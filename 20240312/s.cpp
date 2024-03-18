#include <algorithm>
#include <iostream>
#include <vector>

struct StringWithOneCount {
    std::string str;
    int oneCount;
};

// 自定义比较函数，按照 1 的个数和 ASCII 码进行排序
bool compare(const StringWithOneCount& s1, const StringWithOneCount& s2) {
    if (s1.oneCount != s2.oneCount) {
        return s1.oneCount < s2.oneCount;  // 按照 1 的个数从小到大排序
    }
    return s1.str <
           s2.str;  // 如果 1 的个数相同，则按照字符串的 ASCII 码从小到大排序
}

int main() {
    std::vector<StringWithOneCount> strings;

    // 读取输入，并计算 1 的个数
    std::string line;
    while (std::cin >> line) {
        int count = 0;
        for (char c : line) {
            if (c == '1') {
                count++;
            }
        }
        strings.push_back({line, count});
    }

    // 对字符串进行排序
    std::sort(strings.begin(), strings.end(), compare);

    // 输出排序结果
    for (const auto& s : strings) {
        std::cout << s.str << std::endl;
    }

    return 0;
}
