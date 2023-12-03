#include<iostream>
#include<cstring>
#define ll long long
const int mod = 1e9+7;
struct mat{
	ll m[5][5];
}res, base;
void init() {
	memset(res.m, 0, sizeof(res.m));
	for(int i=1; i<=3; i++) res.m[i][i] = 1;
	memset(base.m, 0, sizeof(base.m));
	base.m[1][1] = base.m[1][3] = base.m[2][1] = base.m[3][2] = 1;
}
mat mul(mat A, mat B){
    mat Ans;
    memset(Ans.m, 0, sizeof(Ans.m));
    for(int k=1;k<=3;k++)
        for(int i=1;i<=3;i++)
            for(int j=1;j<=3;j++){
                Ans.m[i][j] += (A.m[i][k] % mod) * (B.m[k][j] % mod);
                Ans.m[i][j] %= mod;
            }
    return Ans;
}
void q_pow(int q){
    while(q){
        if(q%2!=0) res = mul(res, base);
        base = mul(base, base);
        q /= 2;
    }
}
int main(){
    int t;std::cin>>t;
    ll ans;
    while(t--){
        int n;std::cin>>n;
        init();
        q_pow(n);
        std::cout<<res.m[2][1]<<std::endl;
    }
    return 0;
}