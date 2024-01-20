// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int mp[1010];
//     for(int i=1;i<=n;i++) cin>>mp[i];
//     int num;
//     cin>>num;
//     int k = 0;
//     int l = 1;
//     int r = n;
//     while(l <= r){
//         for(int i=l;i<=r;i++){
//             if(mp[i] < mp[l]){
//                 int tmp = mp[l];
//                 mp[l] = mp[i];
//                 mp[i] = tmp;
//             }
//         }
//         for(int i=r;i>=l;i--){
//             if(mp[i] > mp[r]){
//                 int tmp = mp[r];
//                 mp[r] = mp[i];
//                 mp[i] = tmp;
//             }
//         }
//         l ++;
//         r --;
//         k ++;
//     }
//     for(int i=1;i<=n;i++) cout<<mp[i]<<" ";
//     cout<<endl<<k;
//     return 0;
// }
// 上面这种方法还挺快的，但是不符合题设

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1010];
    for(int i=0;i<n;i++) cin>>a[i];
    int num;
    cin>>num;
    int l = 0;
    int r = n-1;
    while(num--){
        for(int i=l;i<=r-1;i++){
            if(a[i] > a[i+1]){
                int tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
            }
        }
        r --;
        for(int i=r;i>=l+1;i--){
            if(a[i] < a[i-1]){
                int tmp = a[i];
                a[i] = a[i-1];
                a[i-1] = tmp;
            }
        }
        l ++;
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}