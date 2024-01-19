#include <stdio.h>
int  num2array(int **a, int h, int w)
{
	int ans=0;
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			if(*(*(a+i)+j) < 0) ans++;
		}
	}
	return ans;
}
int main()
{  
	int h,w;
	scanf("%d%d",&h,&w);
	int** a = new int *[h];
	for(int i=0;i<h;i++)
		a[i]=new int [w];
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)    
		scanf("%d", *(a+i)+j);
	}
	printf("%d",num2array(a, h, w));
	for(int i=0;i<h;i++)
		delete [] a[i];
	delete [] a;
	a=NULL;    
}
