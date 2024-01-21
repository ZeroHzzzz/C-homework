#include <iostream>
#include <algorithm>

const int MAX_N = 26;

int main() {
    int n, m;
    std::cin >> n >> m;

    char dishes[MAX_N];
    int votes[MAX_N] = {0};

    // 读取特色菜名
    for (int i = 0; i < n; ++i) {
        std::cin >> dishes[i];
        votes[i] = 0;
    }

    // 统计投票
    for (int i = 0; i < m; ++i) {
        char vote[MAX_N];
        std::cin >> vote;

        // 根据投票结果增加得票数
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (dishes[k] == vote[j]) {
                    votes[k] += n - j - 1;
                    break;
                }
            }
        }
    }

    // 将得票结果按照得票数从高到低排序，如果得票数相等，则按字典序升序
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (votes[i] < votes[j] || (votes[i] == votes[j] && dishes[i] > dishes[j])) {
                std::swap(votes[i], votes[j]);
                std::swap(dishes[i], dishes[j]);
            }
        }
    }

    // 输出结果
    for (int i = 0; i < n; ++i) {
        std::cout << votes[i] << ' ';
    }

    return 0;
}
