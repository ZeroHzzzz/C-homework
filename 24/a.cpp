#include<iostream>
using namespace std;
int main(){
    string a;
    getline(cin, a);
    for(int i=0;i<a.size();i++){
        if(a[i] >= 'a' && a[i] <= 'z') a[i] -= 'a' - 'A';
        else if(a[i]>= 'A' && a[i]<='Z') a[i] += 'a' - 'A';
        cout << a[i];
    }
    return 0;
}