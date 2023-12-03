#include<iostream>
using namespace std;
int num[10];

int main(){
    int n;
    cin >>n;
    for(int i=1;i<=n;i++){
        string a;
        cin>>a;
        for(int j=0;j<a.size();j++){
            num[a[j] - '0'] ++;
        }
    }
    for(int i=0;i<=9;i++) cout<<i<<" "<<num[i]<<endl;
    return 0;
}