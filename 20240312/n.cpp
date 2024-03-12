#include<iostream>
#include<algorithm>
using namespace std;
int sum(int n){
    int ans = 0;
    while(n!=0){
        int tmp = n%10;
        ans += tmp;
        n/=10;
    }
    return ans;
}
bool cmp(int a, int b){
    int sa = sum(a);
    int sb = sum(b);
    if(sa == sb) return a >b;
    else return sa > sb;
}
int main(){
    int t = 1;
    while(cin>>t&&t != 0){
        int mp[1010];
        for(int i=1;i<=t;i++) cin>>mp[i];
        sort(mp+1, mp+1+t, cmp);
        for(int i=1;i<=t;i++) cout<<mp[i]<<" ";
        cout<<endl;
    }
    return 0;
}