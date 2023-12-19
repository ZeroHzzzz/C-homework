#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct mnb{
    string name;
    int score;
};
mnb a[1000];
bool cmp(mnb a, mnb b)
{
    if(a.score==b.score) 
		return a.name < b.name;
    return a.score > b.score;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i].name>>a[i].score;
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    cout<<a[i].name<<' '<<a[i].score<<endl;
    return 0; 
}