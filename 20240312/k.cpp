#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int un(int n){
    int ans  = 0;
    //if(n<10) return n;
    int tmp = n;
    int num = 0;
    while(tmp!=0){
        tmp/=10;
        num++;
    }
    while(n!=0){
        int t = n%10;
        n/=10;
        ans += t * pow(10, --num);
    }
    return ans;
}

bool cmp(int a, int b){
    return un(a) < un(b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int mp[110];
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>mp[i];
        }
        sort(mp+1, mp+1+n, cmp);
        for(int i=1;i<=n;i++) cout<<mp[i]<<" ";
        cout<<endl;
    }
    return 0;
}