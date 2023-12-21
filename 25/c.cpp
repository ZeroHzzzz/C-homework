#include <stdio.h>
int main()
{ 
	int n;
	float s,a[100],find(float*,int,int);
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%f",a+i);
	s=find(a,n,1); 
	printf("%f\n",s);
	s=find(a,n,-1);
	printf("%f\n",s);
}
float find(float *p,int n,int flag)
{ 
	int i; float t,fh;
	if(flag>=0) fh=1; 
	else fh=-1;  
    t = 2e9 * (-fh);
	for(i=0;i<n;i++) 
		if(*(p+i)*fh>t*fh) 
			t=*(p+i);
	return t;
}   