#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcdOfThree(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int result = gcdOfThree(a, b, c);
    
    cout << result << endl;

    return 0;
}
