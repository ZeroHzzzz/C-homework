#include<iostream>
#include<algorithm>
using namespace std;
struct node{
    int num;
    int s;
}mp[1100];
bool cmp(node a, node b){
    if(a.s == b.s) return a.num < b.num;
    else return a.s > b.s;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        int tmp = 0;
        cin>>tmp;
        mp[i].num = tmp;
        while(tmp != 0){
            if(tmp % 10 == 7) mp[i].s++;
            tmp /= 10;
        }
    }
    sort(mp + 1, mp + 1 + n, cmp);
    for(int i=1;i<=n;i++) cout<<mp[i].num<<" ";
    return 0;
}