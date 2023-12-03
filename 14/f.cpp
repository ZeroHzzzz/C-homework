#include <iostream>
#include <cmath>
#include <string>
#include <cctype>

bool isValidNumber(long long base, const std::string& num) {
    for (char digit : num) {
        if (!isdigit(digit) && (digit < 'A' || digit > 'F' || digit >= 'A' + base)) {
            return false;
        }
    }
    return true;
}

long long convertToDecimal(long long base, const std::string& num) {
    long long decimal = 0;
    long long power = 0;

    for (long long i = num.length() - 1; i >= 0; --i) {
        char digit = num[i];

        long long digitValue;
        if (isdigit(digit)) {
            digitValue = digit - '0';
        } else {
            digitValue = 10 + (digit - 'A'); // Convert hex letters to decimal
        }

        decimal += digitValue * pow(base, power);

        if (decimal < 0) {
            // Overflow check
            std::cerr << "Error: Overflow occurred." << std::endl;
            exit(EXIT_FAILURE);
        }

        ++power;
    }

    return decimal;
}

int main() {
    int N;
    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        long long base;
        std::string num;
        std::cin >> base >> num;

        if (base < 2 || base > 16 || num.empty() || !isValidNumber(base, num)) {
            std::cerr << "Error: Invalid input." << std::endl;
            exit(EXIT_FAILURE);
        }

        long long decimal = convertToDecimal(base, num);
        std::cout << decimal << std::endl;
    }

    return 0;
}