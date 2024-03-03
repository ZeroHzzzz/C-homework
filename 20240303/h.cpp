#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(!(n % 5 && n % 3)) cout<<"YES";
    else cout<<"NO";
    return 0;
}