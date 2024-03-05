#include<iostream>
using namespace std;
int mp[1010][1010];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) 
        for(int j=1;j<=m;j++) cin>>mp[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            int tmp;
            cin>>tmp;
            mp[i][j]+=tmp;
        }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cout<<mp[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}