#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(string a, string b){
    return a<b;
}
int main(){
    string a[10];
    for(int i=1;i<=3;i++) cin>>a[i];
    sort(a+1, a+1+3, cmp);
    for(int i=1;i<=3;i++) cout<<a[i]<<endl;
    return 0;
}