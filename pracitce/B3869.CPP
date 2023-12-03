#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    string num;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>num;
        long long ans = 0;
        for(int i=0;i<num.size();i++){
            if(num[i] >= '0' && num[i] <= '9') ans += (num[i] - '0') * pow(n, num.size() - i - 1);
            else ans += (num[i] - 'A' + 10) * pow(n, num.size() - i - 1);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}