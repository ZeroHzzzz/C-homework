#include<iostream>

using namespace std;

int fun(int num) {
    int reverseOdd = 0;
    int multiplier = 1;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            reverseOdd = reverseOdd * 10 + digit;
            multiplier *= 10;
        }
        num /= 10;
    }

    return reverseOdd;
}

int main() {
    int num;
    cin >> num;

    int result = fun(num);

    cout << result << endl;

    return 0;
}
