#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,ans=0;
	char d;
	int c[100]={0};
	int maxx=0,flag;
	cin>>a>>d>>b;
	for(int i=a;i<=b;i++)
	{
		int j=i;
		while(j!=1)
		{
			if(j%2==0)
			{
				j/=2;
				ans++;
			}
			else
			{
				j=j*3+1;
				ans++;
			}
		}
		c[i]=ans+1;
		ans=0;
	}
	for(int i=a;i<=b;i++)
	{
		if(c[i]>maxx)
		{
			maxx=c[i];
			flag=i;
		}
	}
	cout<<flag<<endl;
	cout<<maxx<<endl;
	cout<<flag<<"->";
	while(flag!=1)
	{
		if(flag%2==0)
		{
			flag/=2;
			cout<<flag<<"->";
		}
		else if(flag%2!=0)
		{
			flag=flag*3+1;
			cout<<flag<<"->";
		}
	}
}

