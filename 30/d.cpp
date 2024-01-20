#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int mp[5][5];
    for(int i=1;i<=3;i++)
        for(int j=1;j<=4;j++) cin>>mp[i][j];
    for(int i=1;i<=4;i++){
        for(int j=1;j<=3;j++) cout<<setw(5)<<mp[j][i];
        cout<<endl;
    }
    return 0;
}