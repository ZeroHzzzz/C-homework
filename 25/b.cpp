#include<iostream>
using namespace std;
int main(){
    int d, flags, n;
    float item, sum;
    cin>>n;
    d = 1;
    flags = 1;
    sum = 0;
    for(int i=1;i<=n;i++){
        item = flags * (1.0 / d);
        sum = sum + item;
        flags = - flags;
        d = d + 2;
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}