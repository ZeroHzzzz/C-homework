#include<iostream>
#include<cstdio>

using namespace std;
char s[10010];
char f;
int n;
bool flag = false;
void loc(int l, int r){
    // cout<<l<<" "<<r<<endl;
    // cout<<s[3]<<endl;
    // return;
    if(flag == true) return;
    if(l == r){
        if(s[l] == f){
            cout<<l<<endl;
            flag = true;
            return;
        }
        return;
    }
    int mid = (l + r) / 2;
    loc(l, mid);
    loc(mid+1, r);
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>s[n-i+1];
    cin>>f;
    loc(1,n);
    return 0;
}