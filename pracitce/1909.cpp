#include<cstdio>
using namespace std;
int i,j,k,n,m,w,ans;
int main(){
    scanf("%d",&n);
    for(i=0;i<3;i++){
        scanf("%d%d",&j,&k);m=j;w=k;
        while(j<n){j<<=1;k<<=1;}
        while(j>n){j-=m;k-=w;}
        while(j<n){j+=m;k+=w;}
        if(k<ans||ans==0)ans=k;
    }
    printf("%d\n",ans);
    return 0;
}