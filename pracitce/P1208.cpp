#include<iostream>
#include<algorithm>
using namespace std;
struct node{
    int p,w;
}mp[2000010];
bool cmp(node a, node b){
    if(a.p < b.p) return a.p < b.p;
    else if(a.p == b.p) return a.w > b.w;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>mp[i].p>>mp[i].w;
    }
    sort(mp + 1,mp + n + 1, cmp);
    for(int i=1;i<=m;i++){
        cout<<mp[i].p<<" "<<mp[i].w<<endl;
    }
    return 0;
}