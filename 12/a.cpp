#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i] != 'i' && a[i] != 'I' && a[i] != 'a'&& a[i] != 'A' && a[i] != 'e' && a[i] != 'E' && a[i] != 'o' && a[i] != 'O' && a[i] != 'u' && a[i] != 'U') cout<<a[i];
    }
    return 0;
}