#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

map<char, int> mp;

bool compare(const pair<char, int>& lhs, const pair<char, int>& rhs) {
    return lhs.second > rhs.second; // 降序排序
}

int main() {
    int n, num;
    cin >> n >> num;

    for (int i = 1; i <= num; i++) {
        char a, b, c;
        cin >> a >> b >> c;
        mp[a] += 2;
        mp[b] += 1;
    }

    // 将map的键值对存储到vector中
    vector<pair<char, int>> vec(mp.begin(), mp.end());

    // 使用自定义比较函数对vector进行排序
    sort(vec.begin(), vec.end(), compare);

    // 输出排序后的结果
    for (const auto& pair : vec) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}
