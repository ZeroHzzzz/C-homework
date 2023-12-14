#include<iostream>
#include<algorithm>

using namespace std;
struct node
{
    int num;
    int sum;
}odd[110],sen[110];

bool cmp(node a, node b){
    if (a.sum == b.sum) return a.num < b.num; 
    else return a.sum < b.sum;
}
int s(int n){
    int ans = 0;
    while(n != 0){
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int od = 1, se = 1;
    for(int i=1;i<=n;i++){
        int tmp;
        cin>>tmp;
        if(tmp % 2 == 0){
            sen[se].sum = s(tmp);
            sen[se++].num = tmp;
        } else {
            odd[od].sum = s(tmp);
            odd[od++].num = tmp;
        }
    }
    sort(odd + 1, odd + od, cmp);
    sort(sen + 1, sen + se, cmp);
    for(int i=1;i<se;i++) cout<<sen[i].num<<" ";
    for(int i=1;i<od;i++) cout<<odd[i].num<<" ";
    return 0;
}