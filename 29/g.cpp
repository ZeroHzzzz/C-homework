#include<iostream>
using namespace std;
int main(){
    for(int n=1;n<=10;n++){
        for(int i=1;i<=10-n;i++) cout<<" ";
        for(char j='A';j<'A'+2*n-1;j++) cout<<j;
        cout<<endl;
    }
    return 0;
}