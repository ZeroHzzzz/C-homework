#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l = -2e9,tmp;
    int ans = -1;
    int cnt = 1;
    for(int i=1;i<=n;i++){
        cin>>tmp;
        if(tmp == l) {
            cnt ++;
            ans = max(ans, cnt);
            l = tmp;
        }
        else {
            l = tmp;
            cnt = 1;
        }
    }
    cout<<ans;
    return 0;
}