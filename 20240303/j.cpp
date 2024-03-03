#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(abs(a) > 1 || abs(b) > 1) cout<<"no";
    else cout<<"yes";
    return 0;
}