#include<iostream>
using namespace std;
int main(){
    int ansa = 0, ansb = 0;
    for(int i=1;i<=9;i++){
        int tmp;
        cin>>tmp;
        if(i == 1 || i == 5 || i == 9) ansa += tmp;
        if(i == 3 || i == 5 || i == 7) ansb += tmp;
    }
    cout<<ansa<<" "<<ansb<<endl;
    return 0;
}