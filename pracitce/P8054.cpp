#include<bits/stdc++.h>
using namespace std;
long long T,n;
int main(){
	cin>>T;
	while(T--){
		cin>>n;
		while(n%2==0){
			n=n/2;
		}
		if(n==1 || n==3)
			cout<<0<<endl;
		else
			cout<<1<<endl;w
	}
	return 0;
}
