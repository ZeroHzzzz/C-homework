#include<iostream>
using namespace std;
int main(){
    int n;
    char tmp = '1';
    while(tmp != '*'){
        cin>>n;
        cout<<char(n);
        cin>>tmp;
    }
    return 0;
}