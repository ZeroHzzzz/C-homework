#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    long long lst = 0;
    long long ans = 0;
    for(int i=1;i<=n;i++){
        long long tmp;
        cin>>tmp;
        if(i == 1){
            lst = tmp;
            continue;
        }
        if(tmp + lst > x){
            int los = tmp + lst - x;
            ans += los;
            if(los > tmp) lst = 0;
            else{
                lst = tmp - los;
            }
        }
        else{
            lst = tmp;
        }
    }
    cout<<ans;
    return 0;
}