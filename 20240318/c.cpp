#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<int, int> mp;
    while (n--) {
        string tmp;
        cin >> tmp;
        mp[tmp.size()]++;
    }
    for (auto i = mp.begin(); i != mp.end(); i++) {
        cout << i->first << ":" << i->second << endl;
    }
    return 0;
}