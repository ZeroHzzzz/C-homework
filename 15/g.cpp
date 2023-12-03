#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int M1[100][100];
    int M2[100][100];
    int result[100][100];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> M1[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> M2[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < N; ++k) {
                result[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << result[i][j];
            if (j < N - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
