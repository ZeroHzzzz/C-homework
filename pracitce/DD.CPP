#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int a, b, c, d, n = 0;
    cin >>a;
    while(a!=495){
        b = a/100;
        c = a/10%10;
        d = a%10;
        int l = max(b, max(c,d));
        int s = min(b, min(c,d));
        n += 1;
        a = (l-s) *100 + (s -l);
    }
    cout<<n;
    return 0;
}