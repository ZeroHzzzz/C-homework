#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans = 0;
    for(int i=0;i<=2*c;i++)
        for(int j=0;i+j<=2*c;j++){
            if(a*i+b*j == c) ans ++;
        }
    cout<<ans;
    return 0;
}