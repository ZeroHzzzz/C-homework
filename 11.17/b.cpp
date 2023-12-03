#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long> mp;
vector<long long> wid;
long long num[150010];
long long sum[150010];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>num[i];
            sum[i] = sum[i-1] + num[i];
        }
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                mp.push_back(i);
                if(n/i != i) mp.push_back(n/i);
            }
        }
        // cout<<mp.size()<<"ddddd"<<endl;
        long long ans = 0;
        for(int i=0;i<mp.size();i++){
            for(int j=1;j<=n/mp[i];j++){
                wid.push_back(sum[j * mp[i]] - sum[(j-1) * mp[i]]);
            }
            auto minIt = min_element(wid.begin(), wid.end());
            auto maxIt = max_element(wid.begin(), wid.end());
            long long range = *maxIt - *minIt;
            ans = max(range, ans);
            vector<long long>().swap(wid);
        }
        cout<<ans<<endl;
        vector<long long>().swap(mp);
    }
    return 0;
}