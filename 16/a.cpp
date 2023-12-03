#include<iostream>
using namespace std;
int main(){
    int ans = -2e9;
    int mi = -1, mj = -1;
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++){
            int tmp;
            cin>>tmp;
            if(tmp>ans){
                ans = tmp;
                mi = i;mj = j;
            }
        }
    cout<<"max="<<ans<<","<<"row="<<mi<<","<<"column="<<mj;
    return 0;
}