#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    double x,y;
    cin>>x;
    switch ((int)sqrt(x)) {
    case 8: y = pow(x,2);break;
    case 7: y = 2*x/3+4;break;
    case 5: 
    case 6: y = sqrt(x)-1;break;
    default: y = 0;
    }
    cout<<fixed<<setprecision(2)<<"y="<<y<<endl;
    return 0;
}