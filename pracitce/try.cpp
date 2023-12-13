#include<iostream>
using namespace std;
int a = 5;
int main(){
    int a = 10,b = 20, i,j;
    for(int j = 1;j<3;j++){
        cout<<a++<<" "<<b<<endl;
        {
            static int a = 0;
            for(int i=1;i<6;i++) a += i;
            b += a;
            cout<<a<<" "<<b<<endl;
        }
    }
}