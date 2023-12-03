#include<iostream>
#define maxn 110
#define mod 100000007
int n,k;
struct node
{
    long long a[maxn+1][maxn+1];
    void init(){
        for(int i=1;i<=maxn;i++)
            for(int j=1;j<=maxn;j++){
                if(i == j) a[i][j] = 1;
                else a[i][j] = 0;
            }
    }
}mp;
node operator *(const node &A, const node &B){
    node ans;
    for(int k=1;k<=n;k++)
        for(int i = 1;i<=n;i++)
            for(int j=1;j<=n;j++){
                ans.a[i][j] = (ans.a[i][j] + A.a[i][k]*B.a[k][j]%mod) %mod;
          }
    return ans;
}
int main(){
    std::cin>>n>>k;
    node ans;ans.init();
    
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) std::cin>>mp.a[i][j];
    while(k!=0){
        if(k%2!=0) ans = ans * mp;
        mp = mp * mp;
        k /= 2;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) std::cout<<ans.a[i][j]<<" ";
        std::cout<<std::endl;
    }
    return 0;
}