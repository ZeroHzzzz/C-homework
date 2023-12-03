#include <iostream>
#include <vector>

using namespace std;

bool isMagicSquare(vector<vector<int>> &matrix) {
    int magicNumber = 15;

    for (int i = 0; i < 3; ++i) {
        int rowSum = 0;
        int colSum = 0;
        for (int j = 0; j < 3; ++j) {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        if (rowSum != magicNumber || colSum != magicNumber) {
            return false;
        }
    }

    if (matrix[0][0] + matrix[1][1] + matrix[2][2] != magicNumber ||
        matrix[0][2] + matrix[1][1] + matrix[2][0] != magicNumber) {
        return false;
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        vector<vector<int>> matrix(3, vector<int>(3, 0));
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cin >> matrix[i][j];
            }
        }

        if (isMagicSquare(matrix)) {
            cout << "Cheers!" << endl;
        } else {
            cout << "OMyGa!" << endl;
        }
    }

    return 0;
}
