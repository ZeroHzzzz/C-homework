#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; // 测试用例的个数
    cin >> t;
    while (t--) {
        int n, k; // 数组b的长度和操作的次数
        cin >> n >> k;
        vector<int> b(n); // 数组b
        int max_b = 0; // 数组b的最大值
        int min_b = 1e9 + 7; // 数组b的最小值
        int fixed_point = -1; // 数组b的固定点
        int fixed_point_count = 0; // 数组b的固定点的个数
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            max_b = max(max_b, b[i]);
            min_b = min(min_b, b[i]);
            if (b[i] == i + 1) { // 如果bi是固定点，记录它的位置和个数
                fixed_point = i;
                fixed_point_count++;
            }
        }
        if (max_b > n || min_b < 1 || fixed_point_count != 1) { // 如果数组b的最大值大于n，或者数组b的最小值小于1，或者数组b的固定点的个数不等于1，输出"No"
            cout << "No\n";
            continue;
        }
        vector<int> a(n); // 数组a
        bool possible = true; // 是否有可能存在数组a
        for (int i = 0; i < n; i++) { // 从数组b的固定点开始，重构数组a
            int j = (fixed_point + i) % n; // 访问数组b的第j个元素
            a[(i + j) % n] = b[j]; // 将数组b的第j个元素放到数组a的第(i+j) mod n个位置
            if (a[(i + j) % n] != (i + j) % n + 1) { // 如果数组a的元素和数组b的对应元素不相等，输出"No"
                possible = false;
                break;
            }
        }
        if (possible) { // 如果有可能存在数组a，检查数组a是否满足操作的要求
            bool valid = true; // 数组a是否满足操作的要求
            for (int i = 0; i < n; i++) {
                if (a[i] != i + 1) { // 如果数组a的元素不是它的固定点，输出"No"
                    valid = false;
                    break;
                }
            }
            if (valid) { // 如果数组a满足操作的要求，输出"Yes"
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
