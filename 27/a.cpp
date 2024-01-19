#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n % i == 0 && n % (i + 1) == 0) printf("(%d,%d)\n", i, i + 1);
    }
    return 0;
}