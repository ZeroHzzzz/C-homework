#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
        a[i] = ((a[i] - 'a') + n) % 26 + 'a';
    }
    cout<<a;
    return 0;
}