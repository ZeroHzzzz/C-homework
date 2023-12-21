#include<iostream>
#include<algorithm>
using namespace std;
struct node {
    string name;
    double avg;
}mp[110];
bool cmp(node a, node b){
    if(a.avg == b.avg) return a.name < b.name;
    return a.avg > b.avg;
}
int main(){
    int ind = 1;
    int a,b,c,d,e;
    while(cin>>mp[ind].name>>a>>b>>c>>d>>e){
        mp[ind].avg = (a +b +c +d +e)/5.0;
        ind ++;
    }
    sort(mp + 1, mp + ind, cmp);
    for(int i=1;i<ind;i++){
        if(mp[i].avg < 60.0) break;
        cout<<i<<" "<<mp[i].name<<endl;
    }
    return 0;
}