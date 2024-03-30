#include <iostream>
using namespace std;
int ten2two(long long n) {
    int ans = 0;
    while (n != 0) {
        if (n % 2 == 1)
            ans++;
        n /= 2;
    }
    return ans;
}
int main() {
    long long n;
    while (cin >> n) {
        if (n == 0)
            break;
        cout << ten2two(n) << endl;
    }
    return 0;
}