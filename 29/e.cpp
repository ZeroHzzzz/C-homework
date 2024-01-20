#include <iostream>
using namespace std;
int main(){ 
	int max(int [][4]) ;
	int a[3][4];
	for(int i=0; i<3; ++i)
		for(int j=0; j<4; ++j)
			cin>>a[i][j]; 
	cout<<"the max is "<<max(a)<<endl;
	return 0;
}
int max(int array[][4]){ 
	int max = -1;
	for(int i=0;i<3;++i)
		for(int j=0;j<4;++j)
			if(array[i][j] > max) max=array[i][j];
    return max;
}