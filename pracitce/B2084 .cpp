#include<iostream>
using namespace std;
bool isP(int n){
    for(int i=2;i*i<=n;i++) if(n%i==0) return false;
    return true;
}
int main(){
    int n;
    cin>>n;
    if(isP(n)){
        cout<<n;
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0 && isP(i) && isP(n/i)) {cout<<max(i, n/i);break;}
    }
    return 0;
}