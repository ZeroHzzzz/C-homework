#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> nums;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.insert(num);
    }

    int count = 0;
    for (auto it1 = nums.begin(); it1 != nums.end(); ++it1) {
        for (auto it2 = next(it1); it2 != nums.end(); ++it2) {
            int sum = *it1 + *it2;
            if (nums.find(sum) != nums.end()) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
