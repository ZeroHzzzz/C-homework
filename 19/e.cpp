#include<iostream>
#include<cmath>
#include<sstream>

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

bool isSymmetric(int num) {
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }

    return original == reversed;
}

int main() {
    string input;
    getline(cin, input);
    
    stringstream ss(input);
    int num;

    while (ss >> num) {
        if (num <= 99999 && isSymmetric(num) && isPrime(num)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
