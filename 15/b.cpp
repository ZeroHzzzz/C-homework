#include<iostream>
using namespace std;

int num[25][25];
int main(){
    int c,v;
    cin>>c>>v;
    for(int i=1;i<=c;i++)
        for(int j=1;j<=v;j++) cin>>num[i][j];

    for(int j=1;j<=v;j++){
        for(int i=1;i<=c;i++) cout<<num[i][j]<<" ";
    }
    return 0;
}