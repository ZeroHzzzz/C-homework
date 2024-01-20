#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int begin = 1, end = 0;
    for(int i=1;end==0;i+=2){
        int sum = 0;
        for(int j = i;sum<=n*n*n;j+=2){
            sum += j;
            if(sum == n*n*n){
                begin = i;
                end = j;
                break;
            }
        }
    }
    if(end == 0) cout<<"No Answer"<<endl;
    else{
        cout<<n<<"^3=";
        for(int i=begin;i<=end;i+=2){
            if(i != begin) cout<<"+";
            cout<<i;
        }
    }
    return 0;
}