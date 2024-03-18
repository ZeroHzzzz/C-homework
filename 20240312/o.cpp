#include <algorithm>
#include <iostream>
using namespace std;
struct node {
    long long num;
    int score;
} mp[10010];
bool cmp(node a, node b) {
    if (a.score == b.score)
        return a.num < b.num;
    else
        return a.score > b.score;
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> mp[i].num >> mp[i].score;
    sort(mp + 1, mp + 1 + n, cmp);
    for (int i = 1; i <= n; i++)
        cout << mp[i].num << " " << mp[i].score << endl;
    return 0;
}