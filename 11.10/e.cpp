#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, Q;
    cin >> n >> Q;

    vector<int> a(n), b(n), c(n);

    // 输入方程
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i] >> c[i];
    }

    // 处理每次询问
    for (int q = 0; q < Q; ++q) {
        int L, R;
        cin >> L >> R;

        int count = 0;

        // 遍历指定范围内的正整数
        for (int x = L; x <= R; ++x) {
            // 判断是否是至少一个方程的解
            bool isSolution = false;
            for (int i = 0; i < n; ++i) {
                if ((a[i] * x + b[i]) == c[i]) {
                    isSolution = true;
                    break;
                }
            }

            if (isSolution) {
                count++;
            }
        }

        // 输出结果
        cout << count << endl;
    }

    return 0;
}
