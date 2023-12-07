#include<iostream>
using namespace std;
void hanoi(int n, char from, char to, char help){
    if(n == 1){
        cout << n << " " << from << " "<< to << endl;
    } else {
        hanoi(n-1, from, help, to);
        cout << n << " " << from << " "<< to << endl;
        hanoi(n-1, help, to, from);
    }
}
int main(){
    int n;
    char from, to;
    cin>>n>>from>>to;
    hanoi(n, from, to, ('A' + 'B' + 'C') - (from + to));
    return 0;
}