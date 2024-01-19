#include<iostream>
using namespace std;
long long jc(int n){
    if(n == 1) return 1;
    else return n * jc(n - 1);
}
int main(){
    int n;
    cin>>n;
    cout<<"n!="<<jc(n);
    return 0;
}