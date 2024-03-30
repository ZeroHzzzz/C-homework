#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct node {
    int price;
    int quantity;
};
bool cmp(node a, node b) {
    if (a.price == b.price)
        return a.quantity > b.quantity;
    else
        return a.price < b.price;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<node> mp;
    for (int i = 1; i <= m; i++) {
        node tmp;
        cin >> tmp.price >> tmp.quantity;
        mp.push_back(tmp);
    }
    sort(mp.begin(), mp.end(), cmp);
    int ans = 0;
    for (auto i = mp.begin(); i != mp.end(); i++) {
        if (i->quantity <= n) {
            n -= i->quantity;
            ans += i->quantity * i->price;
        } else {
            ans += n * i->price;
            break;
        }
    }
    cout << ans;
    return 0;
}