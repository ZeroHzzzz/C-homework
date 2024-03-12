#include<iostream>
using namespace std;
int main(){
    string a;cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') cout<<a[i];
    }
    return 0;
}