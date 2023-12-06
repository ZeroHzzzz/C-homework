#include <iostream>
#include <string>

using namespace std;

bool chdd(string &s) {
    int ones = 0, zeroes = 0;
    
    for (char c : s) {
        if (c == '0') zeroes++;
        else ones++;
    }
    
    return zeroes >= ones;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        
        cin >> n >> s; 
        
        if (chdd(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}