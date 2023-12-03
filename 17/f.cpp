#include<iostream>
#include<algorithm>
using namespace std;
int n;
unsigned int num[1000010];
bool cmp(int a, int b){
    return a < b;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>num[i];
    sort(num + 1,num + n + 1, cmp);
    if(n%2!=0) cout<<num[(n + 1) / 2];
    else cout<<(num[n/2]+num[n/2+1])/2.0;
    return 0;
}