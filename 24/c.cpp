#include <iostream>
using namespace std;
int main() 
{
    int a[20];
    int x;
    cin>>x;
    int x1=x;
    int j=11;
    while(x)
    {
    	j--;
    	a[j]=x%10;
    	x=x/10;
    }
    int y=0;
    for(int i=10;i>=j;i--)
    	y=y*10+a[i];
    x = y + x1;
    cout<<x;
    return 0;
}