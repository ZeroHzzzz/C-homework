#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

unordered_map<int, int> prime_factors(int n) {
    unordered_map<int, int> factors;
    int i = 2;
    while (i * i <= n) {
        while (n % i == 0) {
            factors[i]++;
            n /= i;
        }
        i++;
    }
    if (n > 1) {
        factors[n]++;
    }
    return factors;
}

int lcm(int x, int y) {
    return x * y / __gcd(x, y);
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int lcm_result = 1;
    unordered_map<int, int> prime_factors_result;

    for (int num : nums) {
        lcm_result = lcm(lcm_result, num);
        unordered_map<int, int> factors = prime_factors(num);
        for (auto factor_count : factors) {
            int factor = factor_count.first;
            int count = factor_count.second;
            prime_factors_result[factor] = max(prime_factors_result[factor], count);
        }
    }

    vector<pair<int, int>> sorted_factors(prime_factors_result.begin(), prime_factors_result.end());
    sort(sorted_factors.begin(), sorted_factors.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first > b.first;
        }
        return a.second > b.second;
    });

    cout << lcm_result << endl;
    for (size_t i = 0; i < sorted_factors.size(); i++) {
        cout << sorted_factors[i].first << ": " << sorted_factors[i].second;
        if (i < sorted_factors.size() - 1) {
            cout << ", ";
        }
    }

    return 0;
}
