#include<iostream>
using namespace std;
int nu(int full, int v){
    if(full - v <= 0) return 1;
    else return 1 + nu(full - v, v + 2);
}
int main(){
    int full, n;
    cin>>full>>n;
    cout<<nu(full, n);
    return 0;
}