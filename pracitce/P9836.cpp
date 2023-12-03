#include<iostream>
#include<map>
using namespace std;
const int MAXN = 1e6 + 10;
map<int, int> mp;
int h[MAXN];
long long gt(long long n){
    long long cnt = 0;
    for(int i=1;i*i<=n;i++){
        if(n % i == 0) cnt ++ ;
        if(n / i != i) cnt ++;
    }
    return cnt;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int tmp;
        h[i] = gt(tmp);
    }
    for(int i=1;i*i<=m;i++){
        if(n % i == 0) mp[i] ++;
        if(n / i != i) mp[n/i] ++;
    }
    
    return 0;
}