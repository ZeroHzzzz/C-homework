#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
        for(int j=1;j<i+2;j++) cout<<a[i];
    return 0;
}