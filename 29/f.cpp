#include <iostream>				
using namespace std;
int func(int x, int* p);
int main(){
	int a[100], x, n, i;      
    cin>>x;
    n = func(x,a); 
    for(i=0; i<n; ++i)
        cout<<a[i]<<' ';     
    cout<<endl;
}
int func(int x, int* p) 	
{	 int k=0, i;     
	 for(i=1; i<x; ++i)
	 {   if(i%2==1 && x%i==0)     
		 {	 p[k]=i;       
	     	 k++;     
		 }
    }
    return k;         
}