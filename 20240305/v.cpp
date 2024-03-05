#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> image(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> image[i][j];
        }
    }

    vector<vector<int>> rotatedImage(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            rotatedImage[i][j] = image[n - j - 1][i];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << rotatedImage[i][j];
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
