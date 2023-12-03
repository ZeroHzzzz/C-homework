#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int sum = 0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            int tmp;
            cin>>tmp;
            if(i == 1||j == m||i == n||j == 1) sum += tmp;
        }
    cout<<sum;
    return 0;
}