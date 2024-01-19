#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int h,w;
    int a[110][110];
    cin >> h >> w;
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=h;i++){
        int tmp = a[i][w];
        for(int j=1;j<=w;j++){
            a[i][j] /= tmp;
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++) cout<<setw(3)<<a[i][j];
        cout<<endl;
    }
    return 0;
}