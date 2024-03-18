#include <iostream>

int main() {
    int height;
    while (std::cin >> height) {
        // 绘制三角形网格
        for (int i = 0; i < height; ++i) {
            // 输出空格，使得字符对齐
            for (int j = 0; j < (height - i - 1); ++j) {
                std::cout << "  ";
            }
            // 输出当前行的字符
            for (int j = 0; j < i + 1; ++j) {
                if (j > 0) {
                    std::cout << " ";
                }
                std::cout << "AAA";
            }
            std::cout << std::endl;
        }
        // 输出两个三角形网格之间的空行，除了最后一个网格外
        if (height > 1) {
            std::cout << std::endl;
        }
    }
    return 0;
}
