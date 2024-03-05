#include<iostream>
using namespace std;
int main(){
    int h,w;
    char a;
    cin>>w>>h>>a;
    for(int i=0;i<h;i++){
        for(int j=0;j<i;j++) cout<<" ";
        for(int j=0;j<w;j++) cout<<a;
        cout<<endl;
    }
    return 0;
}