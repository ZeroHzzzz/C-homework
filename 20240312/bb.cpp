#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int arr[35] = {0};
        for (int i = 1; i <= n; i++) {
            int tmp;
            cin >> tmp;
            arr[tmp]++;
        }
        for (int i = 1; i <= 9; i++) {
            bool flag = true;
            if (arr[i] == 0) {
                flag = false;
                continue;
            } else {
                int num = 0;
                for (int j = 0; j < 5; j++) {
                    if (arr[i + j] > 1)
                        num++;
                    if (num > 2 || arr[i + j] == 0) {
                        flag = false;
                        break;
                    }
                }
            }
            if (flag == true) {
                cout << "Yes" << endl;
                break;
            } else {
                cout << "No" << endl;
                break;
            }
        }
    }
    return 0;
}