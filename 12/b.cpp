#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    if(a.size()>20||a.size()<8) {cout<<"-1";return 0;}
    bool f = 1;
    for(int i=0;i<a.size();i++){
        if(a[i]<'0'||a[i]>'9') f = 0;
    }
    if(f) {cout<<"-2";return 0;}
    cout<<"0";
    return 0;
}