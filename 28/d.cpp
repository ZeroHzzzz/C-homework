#include <iostream>
#include <vector>

int main() {
    std::vector<int> heights;
    int height;
    while (std::cin >> height) {
        heights.push_back(height);
    }

    for (int i = 0; i < heights.size(); ++i) {
        int count = 0;
        for (int j = 0; j < heights.size(); ++j) {
            if (j != i && heights[j] < heights[i]) {
                count++;
            }
        }
        std::cout << count << " ";
    }

    return 0;
}
