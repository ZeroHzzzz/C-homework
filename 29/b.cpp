#include <iostream>
using namespace std;
int main()
{
	int a[34][34]={0};
	for(int i=0;i<34;i++)
	{
		a[i][0] = a[i][i] = 1;
		for(int j=1;j<=i;j++)//其实这里的<=可以改成<，边上的元素可以不用修改
			a[i][j]=a[i-1][j-1] + a[i-1][j];
	}
	for(int m,n;cin>>m>>n;)
		cout<<a[m][n]<<endl;
}