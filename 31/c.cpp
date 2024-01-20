#include<iostream>
using namespace std;
int gdb(int a, int b){
    if(a < b) return gdb(b,a);
    if(a%b == 0) return b;
    return gdb(b, a%b);
}
int main(){
    int a,b;
    char tmp;
    cin>>a>>tmp>>b;
    int gy = gdb(a,b);
    int minn = a>b?b:a;
    int maxn = a>b?a:b;
    int gb = maxn / gy * minn;
    cout<<gb<<endl<<gy;
    return 0;
}