#include<iostream>
#include<algorithm>
using namespace std;
long long school[100010];
long long sorce[100010];
bool cmp(int a, int b){
    return a < b;
}
int main(){
    long long m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++) cin>>school[i];
    for(int i=1;i<=n;i++) cin>>sorce[i];
    sort(school + 1, school + 1 + m, cmp);
    long long ans = 0;
    for(int i=1;i<=n;i++){
        int l = 0, r = m + 1;
        while(l<r){
            int mid = (l + r) / 2;
            if(school[mid] <= sorce[i]){
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        if(sorce[i] <= school[1]) ans += school[1] - sorce[i];
        else{
            ans += min(abs(school[l-1] - sorce[i]), abs(school[l] - sorce[i]));
        }
    }
    cout<<ans;
    return 0;
}