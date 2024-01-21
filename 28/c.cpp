#include <iostream>
#include <string>

int main() {
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::string str_a = std::to_string(a);
    std::string str_c = std::to_string(c);

    long long sa = 0;
    for (char digit : str_a) {
        if (digit - '0' == b) {
            sa = sa * 10 + b;
        }
    }

    long long sb = 0;
    for (char digit : str_c) {
        if (digit - '0' == d) {
            sb = sb * 10 + d;
        }
    }

    std::cout << sa + sb << std::endl;

    return 0;
}
