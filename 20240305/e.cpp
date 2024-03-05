#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a, int b){
    return a>b;
}
int main(){
    int n;
    cin>>n;
    int a[101000];
    for(int i=1;i<=n;i++) cin>>a[i];
    int k;
    cin>>k;
    sort(a + 1, a + 1 + n, cmp);
    for(int i=1;i<=k;i++) cout<<a[i]<<endl;
    return 0;
}