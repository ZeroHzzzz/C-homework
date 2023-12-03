#include<iostream>
#include<cstdio>
long long q(long long base, long long exp, long long mod){
    long long ans = 1;
    while(exp != 0){
        if(exp % 2 != 0) ans = (ans * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return ans;
}
int main(){
    long long base, exp, mod;
    std::cin>>base;
    std::cin>>exp;
    std::cin>>mod;
    long long ans;
    ans = q(base, exp, mod);
    std::cout<<base<<'^'<<exp<<" "<<"mod"<<" "<<mod<<'='<<ans;
    return 0;
}