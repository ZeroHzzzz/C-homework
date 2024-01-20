#include<iostream>
#include<map>
using namespace std;
map<int, int> mp; 
int getnum(int n){
    int num = 0;
    while(n!=0){
        n/=10;
        num++;
    }
    return num;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int tmp;
        cin>>tmp;
        mp[getnum(tmp)] ++;
    }
    
    for(auto it = mp.begin(); it != mp.end(); it ++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}