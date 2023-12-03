#include <iostream>
#include <cmath>
#include <algorithm>

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

void findClosestPrimes(int evenNum) {
    int half = evenNum / 2;
    
    for (int i = half; i > 1; --i) {
        if (isPrime(i) && isPrime(evenNum - i)) {
            int smallerPrime = min(i, evenNum - i);
            int largerPrime = max(i, evenNum - i);

            cout << smallerPrime << " " << largerPrime << endl;
            return;
        }
    }
}

int main() {
    int evenNum;

    while (true) {
        cin >> evenNum;
        if (evenNum == 0) {
            break;
        }

        if (evenNum % 2 != 0 || evenNum < 6 || evenNum > 10000) {
            cout << "Input not valid." << endl;
        } else {
            findClosestPrimes(evenNum);
        }
    }

    return 0;
}
