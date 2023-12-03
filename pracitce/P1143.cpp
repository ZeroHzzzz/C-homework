#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
vector<int>mp;

char tmp[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N'};
int main(){
    int n,m;
    string num;
    cin>>n>>num>>m;
    long long ans = 0;
    for(int i=0;i<num.size();i++){
        if(num[i] >= '0' && num[i] <= '9') ans += (num[i] - '0') * pow(n, num.size() - i - 1);
        else ans += (num[i] - 'A' + 10) * pow(n, num.size() - i - 1);
    }
    // cout<<ans<<endl;
    while(ans != 0){
        mp.push_back(ans % m);
        ans /= m;
    }
    for(int i=mp.size()-1;i>=0;i--) cout<<tmp[mp[i]];
    return 0;
}