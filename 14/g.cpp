#include<iostream>
#include<vector>
using namespace std;
vector<int>mp;
int cnt(int n){
    int ans = 0;
    while(n!=0){
        if(n%2 == 1) ans ++;
        n/=2;
    }
    return ans;
}
int main(){
    int n;
    while(true){
        cin>>n;
        if(n == 0) break;
        for(int i=n+1;;i++){
            if(cnt(i) == cnt(n)) {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}