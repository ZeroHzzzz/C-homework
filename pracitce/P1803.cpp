#include<iostream>
#include<algorithm>
using namespace std;
struct node{
    int l,r;
}mp[1000010];
bool cmp(node a, node b){
    return a.r<b.r;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
       cin>>mp[i].l>>mp[i].r; 
    }
    sort(mp + 1, mp + n + 1, cmp);
    int pos = 0;
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(pos <= mp[i].l){
            pos = mp[i].r;
            ans ++;
        }
    }
    cout<<ans;
    return 0;
}