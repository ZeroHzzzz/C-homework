#include<iostream>
#include<string>
#include<cmath>

using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string word;
    cin >> word;

    int sum = 0;
    for (char c : word) {
        if (c >= 'a' && c <= 'z') {
            sum += c - 'a' + 1;
        } else if (c >= 'A' && c <= 'Z') {
            sum += c - 'A' + 27;
        }
    }

    if (isPrime(sum)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
