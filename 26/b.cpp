#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
void ss(int *p1, int *p2)
{
	int tmp = *p1;
	*p1=*p2;
	*p2=tmp;
} 
int main()
{
	int a,b;
	cin>>a>>b;
	int *p1=&a;
	int *p2=&b;
	if(a<b)
		ss(p1,p2);
	cout<<a<<" "<<b;
}