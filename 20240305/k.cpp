#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    for(int i=1;i<=7;i++){
        for(int j=7;j>i;j--) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<a;
        cout<<endl;
    }
    return 0;
}