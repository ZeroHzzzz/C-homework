#include<iostream>
using namespace std;
int num[11][11];
bool p(int n){
    for(int i=2;i<=n;i++)
            for(int j=1;j<i;j++) if(num[i][j]!=0){return false;}
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++) cin>>num[i][j];
        if(p(n) == false) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}