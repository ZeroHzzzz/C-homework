#include<iostream>
using namespace std;
// 函数重载
int max(int a, int b){
    return a>b?a:b;
}
double max(double a, double b){
    return a>b?a:b;
}
long max(long a, long b){
    return a>b?a:b;
}
int main(){
    int a = 1, b = 2;
    cout<<max(a,b)<<endl;
    double c = 1.0, d = 2.1;
    cout<<max(c,d)<<endl;
    long e = 1, f = 2;
    cout<<max(e,f)<<endl;
    return 0;
}