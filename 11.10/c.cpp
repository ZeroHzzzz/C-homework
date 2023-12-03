#include<iostream>
using namespace std;
int main(){
    int a = 0,b = 0,c = 0;
    for(int i=1;i<=8;i++){
        int tmp;
        cin>>tmp;
        if(tmp >= 118){
            c ++;
        }
        else if(tmp<118&&tmp>=63) b ++;
        else if(tmp<63&&tmp>=41) a ++;
    }
    if(c >= 1){cout<<"10";return 0;}
    else if(c < 1&&b >= 4){cout<<'8';return 0;}
    else if(c <1 &&b<4&&a >=4) {cout<<"3";return 0;}
    else cout<<"1";
    return 0;
}