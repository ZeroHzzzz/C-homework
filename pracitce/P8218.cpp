#include<iostream>
#define ll long long
ll sum[100100];
int n;

int main(){
    std::cin>>n;
    for(int i=1;i<=n;i++){
        int tmp;
        std::cin>>tmp;
        sum[i] = sum[i-1] + tmp;
    }
    int m;
    std::cin>>m;
    for(int i=1;i<=m;i++){
        int l,r;
        std::cin>>l>>r;
        std::cout<<sum[r] - sum[l-1]<<std::endl;
    }
    return 0;
}