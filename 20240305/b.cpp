#include<iostream>
#include<map>
using namespace std;
map<int, string> mp;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>mp[i];
    for(int i=n;i>0;i--) cout<<mp[i]<<endl;
    return 0;
}