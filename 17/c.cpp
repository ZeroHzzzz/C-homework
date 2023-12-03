#include<iostream>
using namespace std;
int num[6];
int main(){
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    for(int i=0;i<a.size();i++){
        if((a[i] <= 'z' && a[i] >= 'a')) num[2] ++;
        else if(a[i] <= 'Z' && a[i] >= 'A') num[1] ++;
        else if(a[i] <= '9' && a[i] >= '0') num[3] ++;
        else if(a[i] == ' ') num[4] ++;
        else num[5] ++;
    }
    for(int i=0;i<b.size();i++){
        if((b[i] <= 'z' && b[i] >= 'a')) num[2] ++;
        else if(b[i] <= 'Z' && b[i] >= 'A') num[1] ++;
        else if(b[i] <= '9' && b[i] >= '0') num[3] ++;
        else if(b[i] == ' ') num[4] ++;
        else num[5] ++;
    }
    for(int i=0;i<c.size();i++){
        if((c[i] <= 'z' && c[i] >= 'a')) num[2] ++;
        else if(c[i] <= 'Z' && c[i] >= 'A') num[1] ++;
        else if(c[i] <= '9' && c[i] >= '0') num[3] ++;
        else if(c[i] == ' ') num[4] ++;
        else num[5] ++;
    }
    for(int i=1;i<=5;i++) cout<<num[i]<<endl;
    return 0;
}