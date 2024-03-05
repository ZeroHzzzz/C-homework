#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(n >=2) cout<<2<<endl;
    for(int i=3;i<=n;i+=2){
        if(isPrime(i)) cout<<i<<endl;
    }
    return 0;
}