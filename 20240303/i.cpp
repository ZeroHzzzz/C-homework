#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n < 1) cout<<n;
    else if(n >= 1 && n < 10) cout<<2*n-1;
    else cout<< 3*n - 11;
    return 0;
}