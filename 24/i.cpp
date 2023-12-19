#include<iostream>
#include<algorithm>
using namespace std;
int a[100100],b[100100];
bool cmp(int a, int b){
    return a<b;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    sort(a + 1, a + 1 + n, cmp);
    sort(b + 1, b + 1 + n, cmp);
    int ind = 1;
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(a[i] > b[ind]){
            // cout<<a[i]<<" "<<b[ind]<<endl;
            ind ++ ;
            ans ++;
        }
    }
    cout<<ans;
    return 0;
}
// 3 5 7 8 10
// 1 2 4 6 9