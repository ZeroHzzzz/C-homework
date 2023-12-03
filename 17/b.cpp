#include<iostream>
using namespace std;
int main(){
	int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=i;j<=m+i-1;j++){
            if(j%m==0) cout<<m<<" ";
            else cout<<j%m<<" ";
        }
        cout<<endl;
    }
    return 0;
}