#include<iostream>
using namespace std;

// 计算因数和
int sumOfDivisors(int num) {
    int sum = 1;
    for(int i = 2; i <= num/2; i++)
        if(num % i == 0) sum += i;
    return sum;
}

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int m = sumOfDivisors(i);

        if(m > i && sumOfDivisors(m) == i) {
            cout << i << " " << m << endl;
            return 0;
        }
    }

    cout << "NULL" << endl;
    return 0;
}
