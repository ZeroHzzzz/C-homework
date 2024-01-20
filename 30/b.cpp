#include<iostream>
using namespace std;
int mp[33];
void jc(int n){
    mp[1] = 1;
    for(int i=2;i<=n;i++){
        mp[i] = i * mp[i-1];
    }
}
int main(){
    int n;
    cin>>n;
    jc(n);
    long long sum = 0;
    for(int i=1;i<=n;i++) sum += mp[i];
    cout<<sum;
    return 0;
}