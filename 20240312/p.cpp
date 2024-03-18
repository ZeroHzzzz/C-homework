#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::set<int> numbers;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        numbers.insert(num);
    }

    if (numbers.size() < k) {
        std::cout << "NO RESULT" << std::endl;
    } else {
        auto it = numbers.begin();
        std::advance(it, k - 1);
        std::cout << *it << std::endl;
    }

    return 0;
}
