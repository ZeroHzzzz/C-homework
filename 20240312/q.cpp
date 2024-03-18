#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::unordered_map<int, int> freqMap;

    // 读取并统计每个正整数的出现次数
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        freqMap[num]++;
    }

    // 找出出现次数最多的整数
    int maxFreq = 0;
    std::vector<int> modes;
    for (const auto& pair : freqMap) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            modes.clear();
            modes.push_back(pair.first);
        } else if (pair.second == maxFreq) {
            modes.push_back(pair.first);
        }
    }

    // 按从小到大排序
    std::sort(modes.begin(), modes.end());

    // 输出结果
    for (const auto& mode : modes) {
        std::cout << mode << "  " << maxFreq << std::endl;
    }

    return 0;
}
