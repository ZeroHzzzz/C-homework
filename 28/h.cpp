#include <iostream>
#include <algorithm>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

void factorize(int num, int factors[], int counts[], int& size) {
    size = 0;
    for (int i = 2; i <= num; ++i) {
        if (num % i == 0) {
            int count = 0;
            while (num % i == 0) {
                num /= i;
                count++;
            }
            factors[size] = i;
            counts[size] = count;
            size++;
        }
    }
}

int main() {
    int n;
    std::cin >> n;

    int nums[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int result_lcm = nums[0];
    for (int i = 1; i < n; ++i) {
        result_lcm = lcm(result_lcm, nums[i]);
    }

    int prime_factors[1000];
    int prime_factors_counts[1000];
    int prime_factors_size;
    factorize(result_lcm, prime_factors, prime_factors_counts, prime_factors_size);

    for (int i = 0; i < prime_factors_size; ++i) {
        for (int j = i + 1; j < prime_factors_size; ++j) {
            if (prime_factors_counts[i] < prime_factors_counts[j] ||
                (prime_factors_counts[i] == prime_factors_counts[j] && prime_factors[i] < prime_factors[j])) {
                std::swap(prime_factors[i], prime_factors[j]);
                std::swap(prime_factors_counts[i], prime_factors_counts[j]);
            }
        }
    }

    std::cout << result_lcm << std::endl;
    for (int i = 0; i < prime_factors_size; ++i) {
        std::cout << prime_factors[i] << ": " << prime_factors_counts[i] << ", ";
    }

    return 0;
}
