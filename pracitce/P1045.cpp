#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;
int f[1001],p,res[1001],sav[1001];
void result_1()
{
    memset(sav,0,sizeof(sav));
    for(register int i=1;i<=500;i+=1)
        for(register int j=1;j<=500;j+=1)
            sav[i+j-1]+=res[i]*f[j];
    for(register int i=1;i<=500;i+=1)
    {
        sav[i+1]+=sav[i]/10;
        sav[i]%=10;
    }
    memcpy(res,sav,sizeof(res));
}
void result_2()
{
    memset(sav,0,sizeof(sav));
    for(register int i=1;i<=500;i+=1)
        for(register int j=1;j<=500;j+=1)
            sav[i+j-1]+=f[i]*f[j];
    for(register int i=1;i<=500;i+=1)
    {
        sav[i+1]+=sav[i]/10;
        sav[i]%=10;
    }
    memcpy(f,sav,sizeof(f));
}
int main()
{
    scanf("%d",&p);
    printf("%d\n",(int)(log10(2)*p+1));
    res[1]=1;
    f[1]=2;
    while(p!=0)
    {
        if(p%2==1)result_1();
        p/=2;
        result_2();
    }
    res[1]-=1;
    for(register int i=500;i>=1;i-=1)
        if(i!=500&&i%50==0)printf("\n%d",res[i]);
        else printf("%d",res[i]);
    return 0;
}