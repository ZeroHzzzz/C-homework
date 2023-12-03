#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    int sum = 0;
    string currentNum;

    for (char c : input) {
        if (isdigit(c)) {
            currentNum += c;
        } else {
            if (!currentNum.empty()) {
                sum += stoi(currentNum);
                currentNum.clear();
            }
        }
    }

    if (!currentNum.empty()) {
        sum += stoi(currentNum);
    }

    cout << sum << endl;

    return 0;
}
