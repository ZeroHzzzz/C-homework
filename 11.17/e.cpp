#include <iostream>
#include <vector>

using namespace std;

int minOperationsToSort(vector<int>& arr) {
    int n = arr.size();
    int operations = 0;
    int max_val = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] >= max_val) {
            max_val = arr[i];
        } else {
            operations++;
        }
    }

    if (operations == 0) {
        return 0; 
    } else if (arr[n - 1] <= arr[0]) {
        return operations;
    } else {
        return -1;  // Sorting is impossible
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int result = minOperationsToSort(arr);
        cout << result << endl;
    }

    return 0;
}
