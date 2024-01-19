#include <stdio.h>
int main()
{
	void change(int *);
	int a[5][5],*p,i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		scanf("%d",a[i][j]);
	}
	p = *a;
	change(p);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}	
}
void change(int *p)//变换函数的实现 
{
	int i,j,temp;
	int *pmax,*pmin;
	pmax=p;
	pmin=p;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(*pmax < *p)
			pmax=p+5*i+j;
			if(*pmin > *p)
			pmin=p+5*i+j;
		}
	 } 
	 //最大值换给中心元素
	 temp=*(p+12);
	 *(p+12) = *pmax;
	 *pmax=temp;
	 //最小值换给左上角
	 temp=*p;
	 *p=*pmin;
	 *pmin=temp;	  
} 