#include <iostream>
using namespace std;
const int N=3;
int main()
{
	int i,j,sum1,sum2;
	int a[N][N];
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cin>>a[i][j];
		}
	}
	sum1=0;
	sum2 = 0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i == j) sum1+=a[i][j];
			if(i + j == N - 1) sum2+=a[i][j];
		}
	}
	cout<<sum1<<" "<<sum2;
	return 0; 
}