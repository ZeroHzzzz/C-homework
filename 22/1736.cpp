#include<iostream>

using namespace std;
double f(double x, double n){
    if(n == 0) return (double) x; 
    return (double)(x / (n + f(x, n-1))); 
}
int main(){
    double n, x;
    cin >> x >> n;
    printf("%.2lf",f(x, n));
    return 0;
}