#include <iostream>
#include <cmath>
using namespace std;
string fun(int n)
{
	int i;
	if(n == 1 || n == 0) return "Undefined";
	for(i=2;i<=sqrt(n);i++) 
		if(n%i==0)
			return "No";
	return "Yes";
}
int main()
{
	int k;
	for(int i=0;i<5;i++)
	{
		cin>>k;
		if(k<0)
			continue;
		cout<<fun(k)<<endl;
	}
    return 0;
}