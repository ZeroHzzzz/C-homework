#include <iostream>
#include <cctype>

char compareIgnoreCase(const std::string& str1, const std::string& str2) {
    for (size_t i = 0; i < str1.length() && i < str2.length(); ++i) {
        char ch1 = std::tolower(str1[i]);
        char ch2 = std::tolower(str2[i]);

        if (ch1 < ch2) {
            return '<';
        } else if (ch1 > ch2) {
            return '>';
        }
    }

    if (str1.length() < str2.length()) {
        return '<';
    } else if (str1.length() > str2.length()) {
        return '>';
    }

    return '=';
}

int main() {
    std::string str1, str2;
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);
    char result = compareIgnoreCase(str1, str2);

    std::cout << result << std::endl;

    return 0;
}