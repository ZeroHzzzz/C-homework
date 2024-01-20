#include<iostream>
using namespace std;
void ten2x(int x, int m){
    string a;
    while(x!=0){
        int t = x % m;
        char tmp;
        if(t >= 10) tmp = t - 9 + 'A' - 1;
        else tmp = t + '0';
        a += tmp;
        x /= m;
    }
    for(int i=a.size()-1;i>=0;i--) cout<<a[i];
}
int main(){
    int x,m;
    cin >> x >> m;
    ten2x(x,m);
    return 0;
}