#include<iostream>
#include<cstdio>
using namespace std;

int num[25][25];
int main(){
    for(int i=1;i<=3;i++)
        for(int j=1;j<=5;j++){
            int tmp;
            cin>>tmp;
            if(tmp != 0)printf("%3d%3d%3d\n",i,j,tmp);
        }
    return 0;
}