#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int tmp;
        cin>>tmp;
        if(tmp%3 == 0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}