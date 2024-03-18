#include <iostream>
using namespace std;
int main() {
    string tmp;
    while (cin >> tmp) {
        int a, b;
        cin >> a >> b;
        b %= tmp.size();
        if (a == 1) {
            for (int i = b; i != tmp.size(); i++)
                cout << tmp[i];
            for (int i = 0; i < b; i++)
                cout << tmp[i];
        } else if (a == 0) {
            for (int i = tmp.size() - b; i != tmp.size(); i++)
                cout << tmp[i];
            for (int i = 0; i < tmp.size() - b; i++)
                cout << tmp[i];
        }
        cout << endl;
    }
    return 0;
}