#include <bits/stdc++.h>
using namespace std;
int main()
{
	const int SIZE = 100;
	int n,f,i,left,right,middle,a[SIZE];
	cin>>n>>f;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	left=1;
	right=n;
	do
	{
		middle = (left + right) / 2;
		if(f<=a[middle])
			right=middle;
		else
			left=middle + 1;
	}while(left<right);
	cout<<left<<endl;
}