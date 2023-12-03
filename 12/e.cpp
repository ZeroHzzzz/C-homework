#include <iostream>
#include <cctype>

std::string extractNumbers(const std::string& input_str) {
    std::string result;

    for (char ch : input_str) {
        if (std::isdigit(ch)) {
            result += ch;
        }
    }

    // 去掉前导0
    size_t firstNonZero = result.find_first_not_of('0');
    result = (firstNonZero != std::string::npos) ? result.substr(firstNonZero) : "0";

    return result;
}

int main() {
    std::string input_string;
    std::cin >> input_string;

    std::string output_numbers = extractNumbers(input_string);

    std::cout << output_numbers << std::endl;

    return 0;
}
