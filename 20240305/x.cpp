#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int ind = n*n-1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(ind < 10){
                    cout<<setw(5)<<"0" + to_string(ind--);
                }
                else cout<<setw(5)<<ind--;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}