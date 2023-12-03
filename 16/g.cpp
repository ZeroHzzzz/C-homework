#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int matrix[100][100];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int maxSum = matrix[0][0];

    for (int left = 0; left < n; left++) {
        vector<int> temp(m, 0);
        for (int right = left; right < n; right++) {
            for (int i = 0; i < m; i++) {
                temp[i] += matrix[i][right];
            }

            int currentSum = temp[0];
            int maxEndingHere = temp[0];

            for (int i = 1; i < m; i++) {
                currentSum = max(temp[i], currentSum + temp[i]);
                maxEndingHere = max(maxEndingHere, currentSum);
            }

            maxSum = max(maxSum, maxEndingHere);
        }
    }

    cout << maxSum << endl;

    return 0;
}
