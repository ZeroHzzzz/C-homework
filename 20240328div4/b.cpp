#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool c[25][25] = {0};

        string ans;
        for (int i = 1; i <= n; i++) {
            string tmp;
            for (int j = 1; j <= n; j++) {
                if ((i + j) % 2 == 0)
                    tmp += "##";
                else
                    tmp += "..";
            }
            tmp += "\n";
            tmp += tmp;
            ans += tmp;
        }
        cout << ans;
    }

    return 0;
}
