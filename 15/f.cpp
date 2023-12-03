#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[20][20];

    int num = 1;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; ++j) {
                matrix[i][j] = num++;
            }
        } else {
            for (int j = n - 1; j >= 0; --j) {
                matrix[i][j] = num++;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[j][i];
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
