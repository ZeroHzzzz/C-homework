#include <iostream>
#include <map>
using namespace std;
map<int, int> mp;
int main() {
    int tmp;
    while (cin >> tmp) {
        if (mp[tmp] == 0) {
            cout << tmp << " ";
            mp[tmp] = 1;
        }
    }
    return 0;
}