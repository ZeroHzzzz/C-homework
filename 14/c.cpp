#include<iostream>
#include<algorithm>
using namespace std;
int num[25];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>num[i];
    sort(num + 1, num + 1 + n);
    int tmp = - 2e9;
    for(int i=1;i<=n;i++){
        if(num[i] == tmp) continue;
        else{
            if(num[i]%2 == 0) cout<<num[i]<<" "; 
            tmp = num[i];
        }
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        if(num[i] == tmp) continue;
        else{
            if(num[i]%2 != 0) cout<<num[i]<<" "; 
            tmp = num[i];
        }
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        if(num[i] == tmp) continue;
        else{
            if(num[i]%3 == 0) cout<<num[i]<<" "; 
            tmp = num[i];
        }
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        if(num[i] == tmp) continue;
        else{
            if(num[i]%10 == 5) cout<<num[i]<<" "; 
            tmp = num[i];
        }
    }
    return 0;
}