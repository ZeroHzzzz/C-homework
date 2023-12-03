#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int a[5000];
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        for (int i=1;i<=1001;i++)
        a[i]=0;
        a[1]=1;
        int n,i,j,k,m;
        int p=1,jw=0;
        scanf("%d%d",&n,&m);
        for(i=2;i<=n;i++)
        {
            jw=0;
            for(j=1;j<=p;j++)
            {
                a[j]=a[j]*i+jw;
                jw=a[j]/10;
                a[j]=a[j]%10;
            }
            while(jw>0)
            {
                a[j]=jw%10;
                jw/=10;
                j++;
            }
            p=j-1;
        }
        long long sum=0;
        for (i=p;i>=1;i--)
        {
            if (a[i]==m)
            sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
