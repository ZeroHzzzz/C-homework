#include<iostream>
using namespace std;
int f(int n){
    int a = 0;
    if(n == 1 || n == 0) a = 1;
    else a = n * f(n - 1);
    return a;
}
int main(){
    cout<<f(3);
    return 0;
}