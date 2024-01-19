#include<iostream>
using namespace std;
int main(){
    char a[2][4] ={
        {'1', '2', '3', '4'},
        {'5', '6', '7', '8'}
    };
    char *b[] = {
        "1234",
        "5678"
    };
    int c[2][4] = {
        {1,2,3,4},
        {5,6,7,8}
    };
    cout<<*a<<endl<<*b<<endl<<*c;
    return 0;
}