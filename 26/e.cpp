#include<iostream>
#include<cstring>
using namespace std;
int main( )
{
	void sort(char* name[],int n);
	void print(char* name[],int n);
	char* name[]={"BASIC","FORTRAN","C++","Pascal","COBOL"};
	int n;
	cin>>n;
	sort(name,n);
	print(name,n); 
    return 0;
}
void sort(char* name[],int n)
{
	char* temp;
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(name[j] < name[k]) k=j;
		if(k != i)
		{
			temp=name[k];
			name[k]=name[i];
			name[i]=temp;
		}
	}
}
void print(char* name[],int n)
{
	for(int i=0;i<n;i++)
	cout<<name[i]<<endl;
}