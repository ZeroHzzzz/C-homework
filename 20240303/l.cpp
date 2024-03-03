#include<iostream>
using namespace std;
int main(){
    int n = 0,tmp;
    for(int i=0;i<2;i++) {cin>>tmp;if(tmp < 60) n ++;}
    
    if(n == 1) cout<< 1;
    else cout<<0;

    return 0;
}