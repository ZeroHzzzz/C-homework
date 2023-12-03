#include<iostream>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int a[50] = {0};
    int sum = 0;
    int b[50] = {0};
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        for(int j=1;j<a[i];j++){
            sum = 0;
            for(int p=1;p<j;p++){
                if(j%p==0) sum += p;
            }
            if(sum == j) b[i] ++;
        }
        if(b[i] == 0) cout<<"no"<<endl;
        else cout<<b[i]<<endl;
    }
    return 0;
}