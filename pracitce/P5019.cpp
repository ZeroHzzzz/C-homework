#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 0;
    int lst = 0;
    for(int i=1;i<=n;i++){
        int tmp;
        cin>>tmp;
        if(i == 1){ans = tmp;lst = tmp;continue;}
        if(tmp > lst) {ans += tmp - lst;}
        lst = tmp;
    }
    cout<<ans;
    return 0;
}