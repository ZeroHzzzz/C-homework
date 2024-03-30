#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string time24;
        getline(cin, time24);

        int hour, minute;
        char colon;
        stringstream ss(time24);
        ss >> hour >> colon >> minute;

        string period = (hour < 12) ? "AM" : "PM";

        if (hour == 0) {
            hour = 12;
        } else if (hour > 12) {
            hour -= 12;
        } else if (hour == 24) {
            hour = 0;
        }

        printf("%02d:%02d %s\n", hour, minute, period.c_str());
    }

    return 0;
}
