#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int mp[20][20];
    int n;
    cin>>n;
    for(int i=0;i<=n;i++) {
        mp[i][0] = mp[i][i] = 1;
        for(int j=1;j<i;j++) mp[i][j] = mp[i-1][j-1] + mp[i-1][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++) cout<<setw(6)<<mp[i][j];
        cout<<endl;
    }
    return 0;
}