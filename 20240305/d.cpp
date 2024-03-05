#include<iostream>
using namespace std;
int main(){
    int a[11];
    for(int i=0;i<10;i++) cin>>a[i];
    for(int i=0;i<10;i++)
        for(int j=0;j<i;j++){
            if(a[j] > a[i]){
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    for(int i=0;i<10;i++) cout<<a[i]<<endl;
    return 0;
}