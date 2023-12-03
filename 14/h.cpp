#include<iostream>
using namespace std;
int arr[1000005],n,k; 
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    arr[n + 1] = 2e9;
    cin>>k;
    int left=1,right=n+1,mid;
    while(left<right)
    {
         mid = (left + right) / 2;
         if(k<arr[mid])
         	right= mid;
         else
          	left=mid + 1;
    }
    if(arr[left - 1] == k)
    	cout<<left - 1;
    else
		cout<<-1;
    return 0;
}