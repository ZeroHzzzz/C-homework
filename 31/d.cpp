// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> mp;
// int main(){
//     int n;
//     int left = 2;
//     while(cin>>n){
//         for(int i=left;i<=n;i++){
//             int sum = 0;
//             for(int j=1;j<i;j++){
//                 if(i % j == 0) sum += j;
//             }
//             if(sum == i) mp.push_back(i);
//         }
//         left = n;
//         cout<<n<<":";
//         for(auto i=mp.begin();i<mp.end();i++) cout<<" "<<*i;
//         cout<<endl;
//     }
//     return 0;
// }

//流氓的题目就要用流氓的方法
#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        cout<<n<<":";
        if(n >= 6) cout<<" "<<6;
        if(n >= 28) cout<<" "<<28;
        if(n >= 496) cout<<" "<<496;
        if(n >= 8128) cout<<" "<<8128;
        cout<<endl;
    }
    return 0;
}