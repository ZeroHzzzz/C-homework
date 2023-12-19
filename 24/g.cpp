#include<iostream>
using namespace std;
int dp[450];
int main(){
    int a,b,m,n;
    cin>>a>>b>>m>>n;
    dp[1] = a, dp[2] = b;
    long long sum = a+b;
    for(int i=3;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
        sum += dp[i];
        if(dp[i] >= m) break; 
    }
    cout<<sum;
    return 0;
}