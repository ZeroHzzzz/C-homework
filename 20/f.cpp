#include<iostream>
#include<bitset>
#include<string>
using namespace std;

bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void findDoublePalindrome() {
    for (int i = 1; i <= 1000; i++) {
        string decimalStr = to_string(i);
        if (!isPalindrome(decimalStr)) {
            continue;
        }

        bitset<32> binary(i);
        string binaryStr = binary.to_string();
        binaryStr = binaryStr.substr(binaryStr.find('1'));
        if (isPalindrome(binaryStr)) {
            cout << i << endl;
        }
    }
}

int main() {
    findDoublePalindrome();

    return 0;
}
