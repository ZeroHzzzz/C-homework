#include<iostream>
using namespace std;
int main(){
    int h,w;
    cin>>w>>h;
    for(int i=0;i<h;i++){
        for(int j=1;j<=i+w;j++) cout<<"A";
        cout<<endl;
    }
    return 0;
}