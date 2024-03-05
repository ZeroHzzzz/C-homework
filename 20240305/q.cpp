#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int lst = 1;
    for(int i=1;i<=n;i++){
        lst *= i;
        sum += lst;
    }
    cout<<sum;
    return 0;
}