#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int tmp = -2e9;
    int cnt = 0;
    int ans = -2e9;
    int s = 0;
    for(int i=1;i<=n+1;i++){
        int d =0;
        if(i == n+1){
            d = 2e9;
        }
        else cin>>d;
        if(d == tmp) cnt ++;
        else{
            if(ans < cnt){
                ans = cnt;
                s = tmp;
            }
            cnt = 1;
        }
        tmp = d;
    }
    cout<<ans<<" "<<s;
    return 0;
}