#include<iostream>
using namespace std;
int main(){
    string a;
    getline(cin, a);
    int num = 0, word = 0;
    char lst = '0';
    for(int i=0;i<a.size();i++){
        if(a[i] == '*') num ++;
        if(lst == '*' && a[i] != '*') word ++;
        lst = a[i];
    }
    cout<<num<<" "<<word;
    return 0;
}