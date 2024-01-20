#include<iostream>
using namespace std;
int inf = 1e9 + 7;
long long fb(int n){
    if(n == 1||n == 2) return 1;
    return (fb(n-1) * fb(n-2)) % inf + 1;
}
int main(){
    int n;cin>>n;
    while(n--){
        int tmp;
        cin>>tmp;
        cout<<fb(tmp)<<endl;
    }
    return 0;
}