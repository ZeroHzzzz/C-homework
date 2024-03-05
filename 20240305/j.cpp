#include<iostream>
using namespace std;
// 差分 a[i] = a[i] - a[i-1]
int main(){
    int mp[10010];
    int m,l;
    cin>>l>>m;
    mp[1] = 1;
    mp[l+1] = -1;
    for(int i=1;i<=m;i++){  
        int l,r;
        cin>>l>>r;
        mp[l]--;mp[r+1]++;
    }
    int ans = 0;
    for(int i=1;i<=l;i++){
        mp[i] = mp[i-1] + mp[i];
        // cout<<mp[i]<<" ";
        if(mp[i] == 1) ans ++;
    }
    cout<<ans+1;

    return 0;
}