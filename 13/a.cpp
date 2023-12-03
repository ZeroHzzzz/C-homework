#include<iostream>
using namespace std;
int gcd(int m,int n){
    if(n>m) return gcd(n,m);
    if(m%n==0) return n;
    else return gcd(n,m%n);
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int e = abs(a - b);
    int f = abs(c-d);
    cout<<gcd(e,f);
    return 0;
}