#include<iostream>
#include<algorithm>
using namespace std;
int votes[1100];

struct node{
    char name;
    int vote;
}mp[30];

bool cmp(node a, node b){
    return a.vote > b.vote;
}

int main(){
    int n,num;
    cin>>num>>n;
    while(n--){
        int sorce = num - 1;
        for(int i=1;i<=num;i++){
            char tmp;
            cin>>tmp;
            votes[tmp - 'A'] += sorce -- ;
        }
    }
    for(int i=0;i<num;i++){
        mp[i].name = i + 'A';
        mp[i].vote = votes[i];
    }
    sort(mp, mp + num, cmp);
    for(int i=0;i<num;i++) cout<<mp[i].name<<" "<<mp[i].vote<<endl;
    return 0;
}