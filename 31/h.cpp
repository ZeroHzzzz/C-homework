#include <iostream>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;

    const int maxDigits = 10;

    int digitCounts[maxDigits] = {0};

    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;

        int digits = countDigits(num);

        digitCounts[digits]++;
    }

    for (int i = 1; i < maxDigits; ++i) {
        if (digitCounts[i] > 0) {
            std::cout << i << ":" << digitCounts[i] << std::endl;
        }
    }

    return 0;
}
