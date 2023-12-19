#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;

double f(double x) {
    return x*x*x*x*x - 15*x*x*x*x + 85*x*x*x - 225*x*x + 274*x - 121;
}

int main() {
    const double epsilon = 1e-7; // 定义误差范围

    double left = 1.5;
    double right = 2.4;

    while (right - left >= epsilon) {
        double mid = (left + right) / 2;
        double midValue = f(mid);
        if (midValue > 0) {
            left = mid;
        } else if (midValue < 0) {
            right = mid;
        } else {
            break;
        }
    }
    // 四舍五入
    printf("%.6lf", round((right + left) / 2 *1e7)/1e7);

    return 0;
}
// #include<iostream>
// int main(){
//     std::cout<<"1.849016";
//     return 0;
// }