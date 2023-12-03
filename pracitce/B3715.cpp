#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long sum = 0;
        for(long long i=2;i*i<=n;i++){
            if(n==1) break;
            while(n%i == 0){
                n /= i;
                sum ^= i;
            }
        }
        if(n > 1) sum ^= n;
        cout<<sum<<endl;
    }
    return 0;
}