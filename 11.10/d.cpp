#include<iostream>
using namespace std;
bool isp(int n){
    // if(n%2 == 0) return false;
    for(int i=2;i*i<=n;i+=1) if(n%i == 0) return false;
    return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int cnum = 0,ind = 1;
        while(cnum < i *i){
            if(isp(ind + 'A' + (i -1 + cnum)%26) == true){
                cout<<char((cnum + i -1 ) % 26 + 'A');
                cnum ++;
            }
            else{
                cout<<" ";
            }
            ind ++;
        }
        // cout<<ind;
        cout<<endl;
    }
    return 0;
}