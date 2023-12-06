#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int checkSecurityLevel(const char *password) {
    bool hasDigit = false, hasUpper = false, hasLower = false, hasOther = false;

    for (int i = 0; i < strlen(password); i++) {
        if (isdigit(password[i])) {
            hasDigit = true;
        } else if (isupper(password[i])) {
            hasUpper = true;
        } else if (islower(password[i])) {
            hasLower = true;
        } else {
            hasOther = true;
        }
    }

    int securityLevel = 4;

    if (!hasDigit) {
        securityLevel--;
    }
    if (!hasUpper) {
        securityLevel--;
    }
    if (!hasLower) {
        securityLevel--;
    }
    if (!hasOther) {
        securityLevel--;
    }

    return securityLevel;
}

int main() {
    char password[20];
    cin.getline(password, 20);

    int securityLevel = checkSecurityLevel(password);

    if (securityLevel == 4) {
        cout << "level-4" << endl;
    } else if (securityLevel == 3) {
        cout << "level-3" << endl;
    } else if (securityLevel == 2) {
        cout << "level-2" << endl;
    } else {
        cout << "level-1" << endl;
    }

    return 0;
}
