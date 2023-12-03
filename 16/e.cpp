#include<iostream>
using namespace std;
int num[110][110];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) cin>>num[i][j];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int row_max = num[i][j];
            int col_min = num[i][j];
            
            for (int k = 1; k <= m; k++) {
                if (num[i][k] > row_max) {
                    row_max = num[i][k];
                }
            }

            for (int k = 1; k <= n; k++) {
                if (num[k][j] < col_min) {
                    col_min = num[k][j];
                }
            }

            if (num[i][j] == row_max && num[i][j] == col_min) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}