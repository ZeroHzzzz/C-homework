#include <iostream>

// 递归函数，将十进制数转换为八进制数
void decimalToOctal(int decimalNumber) {
    if (decimalNumber == 0) {
        return;
    } else {
        decimalToOctal(decimalNumber / 8);
        std::cout << decimalNumber % 8;
    }
}

int main() {
    int decimalNumber;
    std::cin >> decimalNumber;

    decimalToOctal(decimalNumber);

    return 0;
}
