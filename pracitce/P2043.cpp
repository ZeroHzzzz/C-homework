#include<iostream>
#include<map>
using namespace std;
map<int, int> mp;
bool isP(int n){
    for(int i=2;i*i<=n;i++) if(n%i==0) return false;
    return true;
}
int main(){
    int n;
    cin >>n;
    for(int i=2;i<=n;i++) {
        int tmp = i;
        while(tmp%2==0){
            mp[2] ++;
            tmp /= 2;
        }
        for(int j=3;j<=n;j+=2){
            if(tmp == 1) break;
            if(isP(j)){
                while(tmp%j==0){
                    mp[j]++;
                    tmp /= j;
                }
            }
        }
    }
    for(auto i = mp.begin();i!= mp.end();i++){
        cout<<i->first<<' '<<i->second<<endl;
    }
    return 0;
}