#include<iostream>
using namespace std;
int f(int m, int n){
    if(m == 0) return n + 1;
    else if(n == 0 && m > 0) return f(m - 1, 1);
    else if(n > 0 && m > 0) return f(m -1, f(m, n -1));
}
int main(){
    int n, m;   
    cin>>m>>n;
    cout<<f(m,n)<<endl;
    return 0;
}