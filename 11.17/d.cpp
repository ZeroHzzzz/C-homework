#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

long long countNotePairs(const vector<int>& a) {
    int n = a.size();
    unordered_map<int, int> freq;

    for (int i = 0; i < n; ++i) {
        ++freq[a[i]];
    }

    long long count = 0;
    for (const auto& pair : freq) {
        int frequency = pair.second;
        count += static_cast<long long>(frequency) * (frequency - 1) / 2;
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long result = countNotePairs(a);
        cout << result << endl;
    }

    return 0;
}
