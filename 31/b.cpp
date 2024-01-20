#include<iostream>
using namespace std;
int fib(int a, int b, int n){
    if (n == 1) return a;
    else if (n == 2) return b;
    if(n%2) return fib(a,b,n-1) + fib(a,b,n-2);
    else if(!(n%2)) return fib(a,b,n-1) + fib(a,b,n-2) + fib(a,b,n-3);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, n;
        cin>>a>>b>>n;
        cout<<fib(a,b,n)<<endl;
    }
    return 0;
}