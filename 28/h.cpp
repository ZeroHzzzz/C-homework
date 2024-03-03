#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 计算最大公约数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 计算最小公倍数
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main(){
    int arr[110];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    
    return 0;
}