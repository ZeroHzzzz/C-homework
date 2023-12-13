#include <iostream>
using namespace std;

int main() {
    char input;
    while (cin>>input) {
        if (input >= 'C' && input <= 'X') {
            for (char i = input - 2; i <= input + 2; ++i) {
                cout << i;
            }
            cout << endl;
            break;
        } else {
            continue;
        }
    }

    return 0;
}
