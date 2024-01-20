#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x,S=0;
    double term = 1;//这里一定要为1，首先是符合题设，第二是为1的话while条件就不符合
    int n=1;
    cin>>x;
    while(abs(term)>=1e-5){
        S = S + term;
        term = term * (-1) * x*x / ((2*n) *(2*n -1));
        n++;
    }
    cout<<"S="<<S<<endl;
    return 0;
}