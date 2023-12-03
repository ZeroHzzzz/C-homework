#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int num[10010];
vector<int> mp;
priority_queue<int,vector<int>,greater<int> >q;
long long void solve(int x,int sum)
{
    for(int i=1;i<=n;i++)
    {
        cnt[i]=1;
        while(a[i]%x==0) cnt[i]++,a[i]/=x;
        q.push(cnt[i]);
    }
    while(sum) 
    {
        int x=q.top(); q.pop();
        q.push(x+1),sum--;
    }
    for(int i=1;i<=n;i++) ans=ans*q.top()%mod,q.pop();
}
int get_yi(int n){
    int cnt = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt ++;
            if(n/i!=i) cnt ++;
        }
    }
    return cnt;
}
int main(){
    int n,w;
    cin>>n>>w;
    for(int i=1;i<=n;i++){
        int tmp;
        cin>>tmp;
        num[i] = get_yi(tmp);
    }
    
}