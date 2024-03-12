#include<iostream>
using namespace std;
int main(){
    string a;
    int s;
    cin>>s>>a;
    for(int i=0;i<a.size();i++){
        cout<<char((a[i] - 'a' + s)%26 + 'a');
    }
    return 0;
}