#include<iostream>
using namespace std;
struct node{
    string name;
    string gander;
    int grade;
}mp[10];
int main(){
    freopen("b.in","r", stdin);
    freopen("b.out","w", stdout);
    for(int i=1;i<=5;i++){
        cin>>mp[i].name>>mp[i].gander>>mp[i].grade;
        if(mp[i].grade > 60) cout<<mp[i].name<<" "<<mp[i].gander<<" "<<mp[i].grade<<endl;
    }
    fclose(stdin);
	fclose(stdout);
    return 0;
}