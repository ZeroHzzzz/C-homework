#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

vector<int> factors = {1,     10,    11,    100,   101,   110,   111,   1000,
                       1001,  1010,  1011,  1100,  1101,  1110,  1111,  10000,
                       10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000,
                       11001, 11010, 11011, 11100, 11101, 11110, 11111};
bool dp[100010] = {0};
int main() {
    int t;
    dp[1] = 1;
    for (int i = 1; i < factors.size(); i++)
        dp[factors[i]] = 1;
    for (int i = 1; i < factors.size(); i++) {
        for (int j = 1; j <= 100000; j++) {
            if (dp[j] && j * factors[i] <= 100000)
                dp[j * factors[i]] = 1;
        }
    }
    cin >> t;
    while (t--) {
        int tmp;
        cin >> tmp;
        if (dp[tmp] == 1 || tmp == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}