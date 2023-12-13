#include <iostream>
#include <cstdio>
using namespace std;
int func(char* s)
{
	int i,flag=0;
	static int n = 0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
			flag = 0;
		else
			if(flag==0)
			{
				n++;
                flag = 1;
			}
	}
	return n;
}
int main()
{
	char a[3][61];
	for(int i=0;i<3;i++)
	{
		gets(a[i]);
		cout<<func(a[i])<<endl;
	}
    return 0;
}