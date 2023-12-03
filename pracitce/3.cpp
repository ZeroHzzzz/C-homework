#include <iostream>
using namespace std;
int main()
{
	int n,f,a[10001]={0},fmax = -1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>f;
		if(f>fmax) fmax=f;
		a[f] ++ ;
	}
	for(int i=0;i<=fmax;i++)
	{
		cout<<a[i]<<endl;
	 } 
	return 0; 
}