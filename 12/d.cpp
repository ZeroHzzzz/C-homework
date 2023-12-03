#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++) {
        for(int j=a.size()-1;j>i;j--) cout<<" ";
        for(int j=0;j<=i;j++) cout<<a[j];
        cout<<endl;
    }
    return 0;
}