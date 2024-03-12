#include<iostream>
#include<algorithm>

#include<cmath>
using namespace std;
int mp[10] = {0,2,4,5,7,3,9,8,1,6};
int mar2ear(int n){
    int ans = 0;
    int tmp = n;
    int i=0;
    while(n!=0){
        int a = n%10;
        ans += mp[a] * pow(10,i++);
        n/=10;
    }
    return ans;
}
bool cmp(int a, int b){
   return mar2ear(a) < mar2ear(b); 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int num[110];
        for(int i=1;i<=n;i++){
            cin>>num[i];
        }
        sort(num+1, num+1+n, cmp);
        for(int i=1;i<=n;i++) cout<<num[i]<<" ";
        cout<<endl;

    }
}