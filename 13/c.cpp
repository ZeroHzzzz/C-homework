#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n >= 2) cout<<"2"<<endl;
    for(int i=3;i<=n;i+=2){
        bool d = true;
        for(int j=3;j*j<=i;j+=2) if(i%j==0) d = false;
        if(d) cout<<i<<endl;
    }
    return 0;
}