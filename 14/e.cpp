#include<iostream>
#include<vector>
using namespace std;
vector<int>mp;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        mp.push_back(n%2);
        n/=2;
    }
    for(int i=mp.size() - 1;i>=0;i--) cout<<mp[i];
    return 0;
}