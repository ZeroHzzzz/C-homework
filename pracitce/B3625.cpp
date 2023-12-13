#include <iostream>

using namespace std;

char maze[110][110];
int n, m;

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && maze[x][y] == '.';
}

bool dfs(int x, int y) {
    maze[x][y] = '#';

    if (x == n - 1 && y == m - 1) {
        return true;
    }

    if (isValid(x + 1, y) && dfs(x + 1, y)) return true; 
    if (isValid(x - 1, y) && dfs(x - 1, y)) return true;
    if (isValid(x, y + 1) && dfs(x, y + 1)) return true; 
    if (isValid(x, y - 1) && dfs(x, y - 1)) return true;

    return false;
}

int main() {
    // Input
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> maze[i][j];
        }
    }

    // Output
    if (dfs(0, 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
