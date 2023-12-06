#include<iostream>
using namespace std;
struct node {
    long long pre;
    int l,r;
    long long tag;
}tre[400010];
int a[100010];
void build(int p, int l,int r){
    tre[p].l = l, tre[p].r = r;
    if(l == r) {
        tre[p].pre = a[l];
        return;
    }
    int mid = (l + r) / 2;
    build(2*p, l, mid);
    build(2*p + 1, mid + 1, r);
    tre[p].pre = tre[2*p].pre + tre[2*p+1].pre;
}
void spread(int p){
    if(tre[p].tag != 0){
        tre[p*2].pre += tre[p].tag * (tre[p*2].r - tre[p*2].l + 1);
        tre[p*2].tag += tre[p].tag;
        tre[p*2 + 1].pre += tre[p].tag * (tre[p*2 + 1].r - tre[p*2 + 1].l + 1);
        tre[p*2 + 1].tag += tre[p].tag;
        tre[p].tag = 0;
    }
}

void chg(int p, int l, int r, int k){
    if(l <= tre[p].l && r >= tre[p].r){
        tre[p].pre += (long long)k * (tre[p].r - tre[p].l + 1);
        tre[p].tag += k;
        return;
    }
    spread(p);
    int mid = (tre[p].l + tre[p].r) / 2;
    if(l <= mid) chg(p*2, l, r, k);
    if(r > mid) chg(p*2+1, l, r, k);
    tre[p].pre = tre[p*2].pre + tre[p*2+1].pre;
}

long long ask(int p, int l, int r){
    if(l <= tre[p].l && r >= tre[p].r) return tre[p].pre;
    spread(p);
    int mid = (tre[p].l + tre[p].r) / 2;
    long long ans = 0;
    if(l <= mid) ans += ask(p*2, l, r);
    if(r > mid) ans += ask(p*2 + 1, l, r);
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    build(1, 1, n);
    while(m--){
        int cmd;cin>>cmd;
        if(cmd == 1){
            int x,y,k;
            cin>>x>>y>>k;
            chg(1,x,y,k);
        } else if(cmd == 2) {
            int x,y;
            cin>>x>>y;
            long long ans = ask(1, x, y);
            cout<<ans<<endl;
        }
    }
    return 0;
}