#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<int> numbers;

    int num;
    while (cin >> num) {
        numbers.push_back(num);
    }

    // 去重
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());

    // 输出结果
    for (int i : numbers) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
