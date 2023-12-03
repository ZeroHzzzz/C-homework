#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n/20;i>=0;i--){
        // cout<<"0";
        for(int j=(n - i * 20) / 15;j>=0;j--){
            // cout<<"0";
            for(int k=(n - i * 20 - j * 15) / 13;k>=0;k--){
                // cout<<"0";
                for(int l=(n - i * 20 - j * 15 - k * 13) / 6;l>=0;l--){
                    // cout<<"0";
                    if(n - i * 20 - j * 15 - k * 13 - l * 6 == 0){
                        cout<<l<<" "<<k<<" "<<j<<" "<<i;
                        return 0;
                    }
                        
                }
            }
        }
    }
    // for(int i = 0;i<=n/6;i++){
    //     for(int j=0;j<=(n - i*6)/13;j++){
    //         for(int k=0;k<=(n-i*6-j*13)/15;k++){
    //             for(int l=(n-i*6-j*13-k*15)/20;l>=0;l--)
    //                 if(n-i*6-j*13-k*15-l*20 == 0){
    //                     cout<<i<<" "<<j<<" "<<k<<" "<<l;
    //                     return 0;
    //                 }
    //         }
    //     }
    // }
    return 0;
}