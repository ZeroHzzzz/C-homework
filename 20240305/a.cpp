#include<iostream>
using namespace std;
int dfs(int n){
    if(n == 1 || n == 0) return n;
    return dfs(n-1) + dfs(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<dfs(n);
    return 0;
}