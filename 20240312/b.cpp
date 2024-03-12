#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    a[a.size()+1] = a[a.size()];
    a[a.size()] = a[0];
    for(int i=0;i<a.size();i++){
        a[i] = a[i+1] + a[i] - 2 * '0' + 'a' - 1;
    }
    cout<<a;
}