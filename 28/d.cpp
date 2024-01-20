#include<iostream>
#include<algorithm>
using namespace std;
struct node{
    int loc,num,sot;
}mp[110];
bool cmp(node a, node b){
    return a.num > b.num;
}
bool cmp2(node a, node b){
    return a.loc < b.loc;
}
int main(){
    int n = 0;
    while(cin>>mp[++n].num){
        mp[n].loc = n;
    }
    sort(mp + 1, mp + 1 + n, cmp);
    for(int i=1;i<=n;i++){
        for(int j = i + 1; j<=n;j++) if(mp[i].num > mp[j].num) mp[i].sot ++;
    }
    sort(mp + 1, mp + 1 + n, cmp2);
    for(int i=1;i<=n;i++) cout<<mp[i].sot<<" ";
    return 0;
}