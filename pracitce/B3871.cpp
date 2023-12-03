#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll n; cin >> n;
    bool flag = true;
    for (ll i = 2; i * i <= n; i++){
        int cnt = 0;
        while (n % i == 0){
            n /= i;
            cnt++;
        }
        if (cnt > 0){
            if (!flag) cout << " * ";
            cout << i;
            if (cnt > 1) cout << "^" << cnt;
            flag = false;
        }
    }
    if (n > 1){
        if (!flag) cout << " * ";
        cout << n;
    }
    return 0;
}