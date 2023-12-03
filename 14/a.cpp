#include <iostream>
using namespace std;
int gcd(int m,int n){
    if(n>m) return gcd(n,m);
    if(m%n==0) return n;
    return gcd(n,m%n);
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d = max(a,b) / gcd(a,b) * min(a,b);
    cout<<gcd(d, c);
    // cout<<d;

    return 0;
}