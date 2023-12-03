#include<iostream>
#include<algorithm>
using namespace std;
int num[5050];
bool cmp(int a, int b){
    return a<b;
}
int main(){
    int n,s;
    int height;
    cin>>n>>s;
    int tmp;
    cin>>tmp;
    height = tmp;
    cin>>tmp;
    height += tmp;
    int ind = 0;
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        if(a<=height) num[ind++] = b;
    }
    int ans = 0;
    sort(num, num + ind, cmp);
    // for(int i=0;i<ind;i++) cout<<num[i]<<endl;
    for(int i=0;i<ind;i++){
        if(s - num[i] >= 0) s -= num[i],ans ++;
        else break;
    }
    cout<<ans;
    return 0;
}