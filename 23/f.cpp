#include<iostream>
#include<algorithm>
using namespace std;
struct node{
    string num,chinese,math,sum;
}mp[10010];
bool cmp(node a, node b){
    if(a.sum == b.sum){
        if(a.math == b.math){
            if(a.chinese == b.chinese){
                return a.num > b.num;
            } else return a.chinese > b.chinese;
        } else return a.math > b.math;
    } else return a.sum > b.sum;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>mp[i].num>>mp[i].chinese>>mp[i].math>>mp[i].sum;
    }
    sort(mp+1,mp+n+1,cmp);
    for(int i=1;i<=n;i++){
        cout<<mp[i].num<<" "<<mp[i].chinese<<" "<<mp[i].math<<" "<<mp[i].sum<<endl;
    }
    return 0;
}