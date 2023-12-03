#include <iostream>
#include <cctype>

std::string restoreCase(const std::string& input_str) {
    std::string result;
    for (char ch : input_str) {
        if (std::islower(ch)) {
            result += std::toupper(ch);
        } else if (std::isupper(ch)) {
            result += std::tolower(ch);
        } else {
            result += ch;
        }
    }

    return result;
}

int main() {
    std::string input_string;
    std::getline(std::cin, input_string);
    std::string output_string = restoreCase(input_string);
    std::cout << output_string << std::endl;
    return 0;
}
