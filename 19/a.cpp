#include<bits/stdc++.h>
using namespace std;

bool fun(int val)
{
    while(val)
    {
        int k=val%10;
        if(k==7 || k==8) return true;
        val /= 10;
    }
    return false;
}

int main()
{
    for(int n;cin>>n;)
        if (fun(n)) cout<<"Yes\n";
        else cout<<"No\n";
    return 0;
}
