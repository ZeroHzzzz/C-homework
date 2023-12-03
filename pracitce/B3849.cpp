#include<iostream>
#include<vector>
using namespace std;
vector<int>mp;
char num[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int main(){
    long long n,x;
    cin>>n>>x;
    while(n != 0){
        mp.push_back(n % x);
        n /= x;
    }
    for(int i=mp.size()-1;i>=0;i--) cout<<num[mp[i]];
    return 0;
}