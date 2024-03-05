#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=0,c=0;
    while(n--){
        int t,y,u;
        cin>>t>>y>>u;
        a += t;
        b += y;
        c += u;
    }
    cout<<a<<" "<<b<<" "<<c<<" "<<a+b+c;
    return 0;
}