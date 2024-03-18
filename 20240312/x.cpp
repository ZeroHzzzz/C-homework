#include <iostream>
#include <map>
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int tmp = -1;
    while (cin >> tmp) {
        map<int, long long> mp;
        if (tmp == 0)
            break;
        for (int i = 1; i <= tmp; i++) {
            int t;
            cin >> t;
            mp[t] += t;
        }
        int maxn = -1, ind = -1;
        for (auto i = mp.begin(); i != mp.end(); i++) {
            if (maxn < i->second) {
                maxn = i->second;
                ind = i->first;
            }
        }
        cout << ind << endl;
    }
    return 0;
}