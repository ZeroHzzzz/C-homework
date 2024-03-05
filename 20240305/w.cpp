#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> A(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }

    vector<vector<int>> B(m, vector<int>(k));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < k; ++j) {
            cin >> B[i][j];
        }
    }

    vector<vector<int>> C(n, vector<int>(k, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            for (int x = 0; x < m; ++x) {
                C[i][j] += A[i][x] * B[x][j];
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            cout << C[i][j];
            if (j < k - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
