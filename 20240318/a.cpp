#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;
struct node {
    int num, ind;
};  // 存的是等待时间
bool cmp(node a, node b) {
    return a.num < b.num;
}
int main() {
    int n;
    while (cin >> n) {
        vector<node> mp;
        for (int i = 1; i <= n; i++) {
            node tmp;
            cin >> tmp.num;
            tmp.ind = i;
            mp.push_back(tmp);
        }
        sort(mp.begin(), mp.end(), cmp);
        long long tmp = 0;
        long long ans = 0;
        for (auto i = mp.begin(); i != mp.end(); i++) {
            cout << i->ind << " ";
            tmp += i->num;
            ans += tmp;
        }
        cout << endl;
        cout << fixed << setprecision(2) << (double)ans / n << endl;
    }
    return 0;
}