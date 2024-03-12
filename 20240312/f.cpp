#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a, int b){
    return a<b;
}
int main(){
    int a[110];
    for(int i=1;i<=3;i++){cin>>a[i];a[i]%=100;}
    sort(a+1,a+1+3,cmp);
    for(int i=1;i<=3;i++) cout<<a[i]<<endl;
    return 0;
}