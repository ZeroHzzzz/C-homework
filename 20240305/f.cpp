#include<iostream>

#include<map>
using namespace std;
map<int, int>mp;
int main(){
    int n;
    cin>>n;
    int a[10010];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]] = a[i];
    }
    int sum = 0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<i;j++) if(mp[a[i] + a[j]] != 0) sum ++;
    cout<<sum;
    return 0;
}