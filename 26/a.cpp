#include<iostream>
using namespace std;
int x,q,n;
int change(int money, int num){
    if(money == 0) return 0;
    else{
        if(num < n) return 0;
        return num / n + change(money - num / n, num - num / n * n + num / n);
    }
    
}
int main(){
    
    while(cin>>x>>q>>n){
        cout << "Ans = " << change(q, x)<<endl;
    }
    // cin >> x >> q >> n;
    return 0;
}