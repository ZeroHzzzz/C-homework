#include<iostream>
using namespace std;
int num[5];
int main(){
    string a;
    
    getline(cin, a);
    for(int i=0;i<a.size();i++){
        if((a[i] <= 'z' && a[i] >= 'a') || (a[i] <= 'Z' && a[i] >= 'A')) num[1] ++;
        else if(a[i] <= '9' && a[i] >= '0') num[2] ++;
        else if(a[i] == ' ') num[3] ++;
        else num[4] ++;
    }
    for(int i=1;i<=4;i++) cout<<num[i]<<" ";
    return 0;
}