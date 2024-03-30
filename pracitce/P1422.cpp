#include <iostream>
using namespace std;
double cost[10005];
int a;
double b;
int main() {
    int i;
    cin >> a;
    for (i = 1; i <= 150; i++)
        cost[i] = 0.4463;
    for (i = 151; i <= 400; i++)
        cost[i] = 0.4663;
    for (i = 401; i <= 10000; i++)
        cost[i] = 0.5663;
    for (i = 1; i <= a; i++)
        b += cost[i];
    b = int((b * 10) + 0.5) / 10.0;
    cout << b << endl;
    return 0;
}