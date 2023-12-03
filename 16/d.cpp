#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[11][11];

    int num = 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = num++;
            }
        } else {
            for (int j = n - 1; j >= 0; j--) {
                matrix[i][j] = num++;
            }
        }
    }
    for (int i = n - 1; i >=0; i--) {
        for (int j = n - 1; j >=0; j--) {
            printf("%3d",matrix[i][j]);
        }
        cout << endl;
    }

    return 0;
}