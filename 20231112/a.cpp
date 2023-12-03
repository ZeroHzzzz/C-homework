#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans1 = 0,ans2 = 0;;
    for(int i=1;i<=n;i++){
        string a;
        cin>>a;
        for(int j=0;j<a.size();j++){
            if(a[j] == '0') ans1++;
            else if(a[j] == '9') ans2 ++;
        }
        // cout<<a<<endl;
    }
    cout<<ans1<<" "<<ans2;
    return 0;
}