#include<iostream>
#include<map>
#define MOD 998244353
using namespace std;
int h[10010];
int width[10010];
int dp[10010];
map<int, int> mp;
int main(){
    int n,w;
    cin>>n>>w;
    for(int i=1;i<=n;i++) cin>>h[i];
    for(int i=1;i<=n;i++){
        int ind  = 0;
        for(int j=1;j*j<=h[i];j++){
            if(h[i] % j == 0) ind ++;
            if(h[i]/j != j) ind ++;
        }
        width[i] = ind;//每棵树的宽度
    }
    for(int i=1;i*i<=w;i++){
        if(w%i==0 &&mp[i] == 0){
            int ind = 0;
            for(int j=1;j*j<=i;j++){
                if(i%j==0) ind ++;
                if(i/j!=j) ind ++;
                mp[i] = j;//因子的因子数
            }
        }
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=mp.size();j++)
    cout<<dp[w] % MOD;
    return 0;
}