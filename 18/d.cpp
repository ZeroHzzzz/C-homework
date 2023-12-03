#include<iostream>
#include<string>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    size_t pos = input.find("*****");

    while (pos != string::npos) {
        input.replace(pos, 5, "apple");
        pos = input.find("*****");
    }

    cout << input << endl;

    return 0;
}
