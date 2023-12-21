#include<iostream>
#include<iomanip>
using namespace std;
int ans[30][30];
int main(){
    int n;
    cin>>n;
    int k = 1;
    
    for(int i=1;i<=n;i++)
        for(int j=n-1;j>=i;j--){
            ans[j][j-i] = k;
            k++;
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<setw(4)<<ans[i][j];
        cout<<endl;
    }
    return 0;
}