#include<iostream>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    // 输入矩阵A
    int A[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }

    // 输入矩阵B
    int B[100][100];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < k; ++j) {
            cin >> B[i][j];
        }
    }

    // 计算矩阵C
    int C[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            C[i][j] = 0;
            for (int x = 0; x < m; ++x) {
                C[i][j] += A[i][x] * B[x][j];
            }
        }
    }

    // 输出矩阵C
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
