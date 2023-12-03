#include<iostream>
#include<vector>
#define mod int(1e9 + 7)
// using namespace std;
#define ll long long
int n;
struct mat
{
    ll m[5][5];
    //创建单位矩阵
    void init(){
        for(int i=0;i<5;i++)
            for(int j=0;j<5;j++) m[i][j] = 0;
    }
}base, ans;


mat operator *(const mat &A, const mat &B){
    mat res;res.init();
    for(int k=0;k<2;k++)
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++){
                res.m[i][j] += (A.m[i][k] % mod) * (B.m[k][j] % mod);
                res.m[i][j] %= mod;
            }
    return res; 
}

int main(){
    // int n;
    ans.init();base.init();
    base.m[0][0] = base.m[0][1] = base.m[1][0] = 1; //base
    ans.m[0][0] = ans.m[0][1] = 1;
    std::cin>>n;n--;
    if(n<=2){std::cout<<"1";return 0;}
    while(n){
        if(n%2!=0) ans = ans * base;
        base = base * base;
        n /= 2;
    }
    std::cout<<ans.m[0][1];
    return 0;
}

/*
初始值[f1, f2] -> [f2, f3]
f2 = 0*f1 + 1*f2
f3 = 1*f1 + 1*f2

[0,1]  -> [1,1]
[1,1]  -> [0,1]

*/