#include<iostream>
using namespace std;
int num[200010];
int dp[200010][2];//开始的时候选择奇数或者偶数
int main(){
    int t;
    while(t--){
        int n;
        cin>>n;
        int fj = 0, fo = 0;
        for(int i=1;i<=n;i++) cin>>num[i];
        for(int i=1;i<=n;i++) if(abs(num[i]) % 2 == 0){fo = i;break;}
        for(int i=1;i<=n;i++) if(abs(num[i]) % 2 != 0){fj = i;break;}
        bool flag = false;
        for(int i=fo;i<=n;i++){
            for(int j=1;j<=i;j++){
                if(flag == false){
                    if(abs(num[j])%2 == 0 && dp[i] < dp[j] + num[j]) 
                }
            }
        }
    }
    return 0;
}