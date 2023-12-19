#include<iostream>
using namespace std;
#define N 100
int fun(int c[], int m){
    int j = 0;
    for(int i=0;i<m;i++){
        if(c[i] %2==0){
            c[j] = c[i];
            j ++;
        }
    }
    return j;
}
int main(){
    int a[N],n,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    k = fun(a,n);
    cout<<"The number of even:"<<k<<endl;
    cout<<"The even:";
    for(int i=0;i<k;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}