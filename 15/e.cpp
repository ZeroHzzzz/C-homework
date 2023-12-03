#include<iostream>
using namespace std;

int num[25][25];
int main(){
    int c;
    cin>>c;
    for(int i=1;i<=c;i++)
        for(int j=1;j<=c;j++) cin>>num[i][j];

    for(int i=c;i>=1;i--){
        for(int j=1;j<=c;j++) cout<<num[j][i]<<" ";
        cout<<endl;
    }
    return 0;
}