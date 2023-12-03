#include <iostream>
using namespace std;

void solve(long long n) {
  if (n % 2 != 0) {
    cout << -1 << endl;
    return;
  }
  long long min = -1, max = -1;
  for (long long b = n / 6; b >= 0; b--) {
    if ((n - 6 * b) % 4 == 0) {
      long long a = (n - 6 * b) / 4;
      min = a + b;
      break;
    }
  }
  for (long long a = n / 4; a >= 0; a--) {
    if ((n - 4 * a) % 6 == 0) {
      long long b = (n - 4 * a) / 6;
      max = a + b;
      break;
    }
  }
  if (min != -1 && max != -1) {
    cout << min << " " << max << endl;
  } else {
    cout << -1 << endl;
  }
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    long long n;
    cin >> n;
    solve(n);
  }
  return 0;
}