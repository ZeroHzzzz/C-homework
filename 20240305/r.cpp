#include<iostream>
using namespace std;
int main(){
    char a;
    int h;
    cin>>a>>h;
    for(int i=1;i<=h;i++){
        for(int j=h;j>i;j--) cout<<" ";
        for(int j=1;j<=i;j++) cout<<a;
        cout<<" ";
        for(int j=1;j<=i;j++) cout<<a;
        cout<<endl;
    }
    return 0;
}