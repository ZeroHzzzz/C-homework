#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct node{
    double m,w,p;
}mp[110];
bool cmp(node a, node b){
    return a.p > b.p;
}
double ans;
int main(){
    int n,t;
    cin>>n>>t;
    int tmp = n;
    while(n--){
        cin >> mp[n].m >> mp[n].w;
        mp[n].p = mp[n].w / mp[n].m;
    }
    // cout<<"dddd";
    sort(mp, mp + tmp, cmp);
    // cout<<"dddd";........../.;,ll,lljmopji
    // for(int i=0;i<tmp;i++) {
    //     cout<<mp[i].m<<" "<<mp[i].w<<" "<<mp[i].p<<endl;
    // }
    for(int i=0;i<tmp;i++){
        if(t >= mp[i].m){
            ans += mp[i].w;
            t -= mp[i].m;
        }
        else{
            ans += mp[i].p * t;
            t = 0;
            break;
        }
    }
    printf("%.2lf",ans);
    return 0;
}