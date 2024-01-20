#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    if(n<1000||n>9999) cout<<"Input Error";
    else if(n%400 == 0||(n%4==0 && n%100 != 0)) cout<<"Yes";
    else cout<<"No";
    return 0;
}