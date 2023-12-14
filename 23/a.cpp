#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculateDigitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// 比较函数，用于排序
bool compare(int a, int b) {
    int sumA = calculateDigitSum(a);
    int sumB = calculateDigitSum(b);

    if (sumA != sumB) {
        return sumA > sumB;
    } else {
        return a > b;
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end(), compare);
    for (int i = 0; i < N; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
