// 函数模板
#include<iostream>
using namespace std;
template<class T>
T maxn(T a, T b){return a>b?a:b;}
int main(){
    int a = 1, b = 2;
    cout<<maxn(a,b)<<endl;
    double c = 1.1, d = 1.2;
    cout<<maxn(c,d)<<endl;
    long e = 11, f = 22;
    cout<<maxn(e,f)<<endl;
    return 0;
}
// question: different between the key words class and typename