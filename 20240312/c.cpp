#include<iostream>
using namespace std;
int max(int a, int b){
    return a > b ? a : b;
}
int min(int a, int b){
    return a < b ? a : b;
}
int mp[110];
int main(){
    char a;
    int maxn = -1;
    int minn = 2e9;
    while(cin>>a&&a!='\n'){
        mp[a-'a'] ++;
        maxn = max(a - 'a', maxn);
        minn = min(a - 'a', minn);
    }
    for(int i=minn;i<=maxn;i++){
        if(mp[i] == 1) {cout<<char(i+'a')<<endl;return 0;}
        // cout<<mp[i]<<" ";
    }
    cout<<"no"<<endl;
    return 0;
}