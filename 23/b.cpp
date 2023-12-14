#include<iostream>
#include<algorithm>
using namespace std;
struct node{
    int loc;
    int num;
}mp[110];
bool cmp(node a, node b){
    if(a.num == b.num) return a.loc > b.loc;
    else return a.num < b.num;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>> mp[i].num;
        mp[i].loc = i;
    }
    sort(mp + 1, mp + 1 + n, cmp);
    for(int i=1;i<=n;i++) cout<<mp[i].num<<"("<<mp[i].loc<<")"<<" ";
    return 0;
}