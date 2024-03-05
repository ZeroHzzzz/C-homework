#include<iostream>
using namespace std;
bool iss(int n){
    int tmp = n;
    if(tmp %7 ==0) return false;
    while(tmp != 0){
        if(tmp%10 == 7) return false;
        tmp /= 10; 
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(iss(i)) ans += i*i;
    }
    cout<<ans;
    return 0;
}