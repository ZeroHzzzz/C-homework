#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num, tmp = n;
    while(tmp != 0){
        tmp /= 10;
        num ++;
    }
    tmp = n;
    int sum = 0;
    while(tmp != 0){
        int t = tmp % 10;
        sum += pow(t, num);
        tmp /= 10;
    }
    if(sum == n) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}