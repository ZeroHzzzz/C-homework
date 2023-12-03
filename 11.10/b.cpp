#include <iostream>

using namespace std;

int main() {
    int a,b,c,d,m;
    cin>>a>>b>>c>>d>>m;
    int sum = a * 5;
    int ans = c * 5;
    if (ans > m){
        ans += d *20 - (b -d) * 20;
    }
    else ans -= (b - d) * 20;
    if(ans < 0) cout<<"0";
    else cout<<ans;
    return 0;
}
