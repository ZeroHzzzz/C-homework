#include<iostream>
using namespace std;
int a[110];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        int num = 0;
        for(int j=1;j<i;j++){
            if(a[j]<a[i]) num ++;
        }
        cout<<num<<" ";
    }
    return 0;
}