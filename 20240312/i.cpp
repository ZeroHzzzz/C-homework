#include<iostream>
#include<cstdio>
using namespace std;
bool isPrime(int n){
    if(n==2) return true;
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
    }
    return true;
}
int main(){
    for(int i=6;i<=100;i+=2){
        if(isPrime(i-2)==true) printf("%d=%d+%d\n", i, 2, i-2);
        else{
            for(int j=3;j<=i/2;j+=2){
                if(isPrime(j)==true&&isPrime(i-j)==true){
                    printf("%d=%d+%d\n", i, j, i-j);
                    break;
                }
            }
        }
    }
    return 0;
}