//居然还有要猜题目是什么的题目
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int *p = new int[n];
    for(i=0;i<n;i++)
        cin>>p[i];
    for(i=0;i<n-1;i++){
        int k=i,x;
        for(j=i+1;j<n;j++)
            if(p[j] < p[k]) k = j;
        x=p[i];p[i]=p[k];p[k]=x;
    }
    for(i=0;i<n;i++) cout<<p[i]<<" ";
    delete [] p;
    p=NULL;
    return 0;
}
//如果不是为了要考试这种答辩代码我是看都不想看