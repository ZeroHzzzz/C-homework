#include<iostream>
using namespace std;
int main( )
{
	int a[10]={0},n;
	while(cin>>n)
	{
		int b[10]={0};
		if(n==0) b[0]++;
		for(int i=n;i>0;i/=10)
			b[i%10]++;
		for(int i=0;i<10;i++)
		if(b[i]>0) a[i]++;
	}
	for(int i=0;i<10;i++)
		cout<<i<<": "<<a[i]<<endl;
    return 0;
}