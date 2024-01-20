#include<iostream>
#include<vector>
using namespace std;
void add(int a, int numa, int b, int numb){
    if(numa < numb){
        add(b, numb, a, numa);
        return;
    }
    vector<int>c;
    for(int i=0;i<numa;i++) c.push_back(a);
    for(int i=0;i<numb;i++) c[i] += b;
    int t = 0;
    for(int i=0;i<c.size();i++) {
        t = 0;
        if(c[i] >= 10){
            t = c[i] / 10;
            if(t != 0 && i != c.size() - 1) c[i + 1] += t;
            c[i] %= 10;
        }
    }
    if(t != 0)
        c.push_back(t);
    for(int i = c.size() - 1; i >= 0; i--) cout << c[i];
}
int main(){
    char b, d;
    string a, c;
    cin>>a>>b>>c>>d;
    int numa = 0, numb = 0;
    for(int i=0;i<a.size();i++) if(a[i] == b) numa ++;
    for(int i=0;i<c.size();i++) if(c[i] == d) numb ++;
    add(b-'0', numa, d-'0', numb);
    return 0;
}