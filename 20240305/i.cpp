#include<iostream>
using namespace std;
bool l[10010] = {0};
int  main(){
    int n,m;
    cin>>n>>m;
    for(int i=2;i<=m;i++){
        int k = 1;
        while(i*k <= m){
            l[i*k] = !l[i*k];
            k++;
        }
    }
    bool flag = false;
    for(int i=1;i<=n;i++){
        if(flag == false){
            if(l[i] == false){
                cout<<i;
                flag = true;
            }
        }
        else{
            if(l[i] == false) cout<<","<<i;
        }
    }
    return 0;
}