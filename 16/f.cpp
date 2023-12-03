#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[20][20] = {0}; 

    int num = 1;
    int row = 0, col = 0;
    int dir = 0;

    for (int i = 1; i <= n * n; i++) {
        matrix[row][col] = num++;
        
       
        switch (dir) {
            case 0:
                row++;
                break;
            case 1:
                col++;
                break;
            case 2:
                row--;
                break;
            case 3:
                col--;
                break;
        }

        if (row >= n || col >= n || row < 0 || col < 0 || matrix[row][col] != 0) {
            switch (dir) {
                case 0:
                    row--;
                    col++;
                    dir = 1;
                    break;
                case 1:
                    row--;
                    col--;
                    dir = 2;
                    break;
                case 2:
                    row++;
                    col--;
                    dir = 3;
                    break;
                case 3:
                    row++;
                    col++;
                    dir = 0;
                    break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}
