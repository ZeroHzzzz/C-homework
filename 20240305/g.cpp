#include<iostream>
using namespace std;

int max(int a, int b){
    return a>b?a:b;
}
int min(int a, int b){
    return a<b?a:b;
}
int main(){
    int n;
    cin>>n;
    int maxn = -1, minn = 2e9;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        maxn = max(maxn, tmp);
        minn = min(minn, tmp);
    }
    cout<<maxn - minn <<endl;
    return 0;
}