#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum = 0;
    double term = 1;
    for(int i=1;i<=n+1;i++){//为啥是n+1呢，就是因为i=10的时候term没有加上去
        sum += term;
        term /= i;
    }
    printf("%.10f",sum);
    return 0;
}