#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i=0;i<a.size()-1;i++){
        if(a[i] == a[i+1]){
            for(int j=i+1;j<a.size();j++){
                a[j] = a[j+1];
            }
        }
    }
    cout<<a;
    return 0;
}
