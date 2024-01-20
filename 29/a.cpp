#include <iostream>
using namespace std;
int main()
{
	int n,sum;
	cin>>n;
	for(int m=2;m<=n;m++)
	{
		sum = 0;
		for(int i=1;i<m;++i)
			if (m%i==0) sum+=i;
		if (m == sum)
		{
			cout<<m<<endl;
		}
	}
}