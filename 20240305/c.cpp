#include<iostream>
using namespace std;
int main(){
    int n;
    int a[11];
    for(int i=1;i<=9;i++) cin>>a[i];
    cin>>n;
    bool flag = false;
    for(int i=1;i<=9;i++){
        cout<<a[i]<<endl;
        if(i < 9 && ((a[i] > n && a[i+1] < n) || (a[i+1] > n && a[i] < n)))
            {cout<<n<<endl;flag = true;}
    }
    if(flag == false) cout<<n<<endl;
    return 0;
}