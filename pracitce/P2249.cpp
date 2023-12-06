#include<iostream>
using namespace std;
int num[1000100];
int n,q;
int loc(int k){
    int l=1,r=n;
	while(l<r)
	{
		int mid=(l+r)/2;
		if(num[mid]>=k) r=mid;
		else l=mid+1;
	}
	if(num[l]==k) return l;
	return -1;
}
int main(){
    cin>>n>>q;
    for(int i=1;i<=n;i++) cin>>num[i];
    while(q--){
        int tmp;
        cin>>tmp;
        cout<<loc(tmp)<<" ";
    }
    return 0;
}