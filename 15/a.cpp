#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<i) cout<<"00";
            else cout<<i<<j;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}