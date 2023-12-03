#include<iostream>
using namespace std;
bool vis[26];
int main(){
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++) vis[a[i] - 'a'] = 1;
    int ans = 0;
    for(int i=0;i<26;i++)
        if(vis[i]==1) ans ++;
    cout<<ans;
    return 0;
}