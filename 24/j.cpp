#include<iostream>
using namespace std;
int dp[110];
int main() {
    int n, k;
    cin >> n >> k;
    dp[0] = 1;
    flag:
    for(int i = 1;i<=n;i++){
        if(i == 1) dp[1] = dp[0] * n + k;
        else{
            if(dp[i-1] % (n-1) != 0){
                dp[0] ++;
                goto flag;
            }
            else dp[i] = dp[i-1] / (n-1) * n + k;
        }
    }
    cout<<dp[n];
    return 0;
}
