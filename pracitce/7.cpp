#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    sort(a.begin(), a.end());
    for(int i=a.size()-1;i>=0;i--) cout<<a[i];
    return 0;
}