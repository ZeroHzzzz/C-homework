#include <iostream>

using namespace std;

int combination(int n, int m) {
  if (m == 0 || m == n) {
    return 1;
  } else {
    return combination(n - 1, m - 1) + combination(n - 1, m);
  }
}

int main() {
  int n, m;
  while (cin >> n >> m) {
    cout << combination(n, m) << endl;
  }

  return 0;
}
