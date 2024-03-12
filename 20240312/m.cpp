#include<iostream>
#include<algorithm>
using namespace std;
int num6(int n){
    int num = 0;
    while(n!=0){
        int tmp = n%10;
        if(tmp==6) num++;
        n/=10;
    }
    return num;
}
bool cmp(int a , int b){
    int ta = num6(a);
    int tb = num6(b);
    if(ta == tb) return a>b;
    else return ta>tb;
}
int main(){
    int n;
    cin>>n;
    int mp[11000];
    for(int i=1;i<=n;i++) cin>>mp[i];
    sort(mp+1, mp+1+n, cmp);
    for(int i=1;i<=n;i++) cout<<mp[i]<<" ";
    return 0;
}