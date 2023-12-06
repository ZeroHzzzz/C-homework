#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

        // Sort the array to easily find the maximum element
        sort(a.begin(), a.end());

        // Calculate the difference between the maximum element and the last element
        int diff = a[n - 1] - a[0];

        // Print the total operations required
        cout << diff << endl;
    }

    return 0;
}
