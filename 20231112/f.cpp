#include <iostream>
#include <string>
using namespace std;

bool solve(string s) {
  int count[26] = {0};
  for (char c : s) {
    count[c - 'a']++;
  }
  int x = 0, y = 0;
  for (int i = 0; i < 26; i++) {
    if (count[i] % 2 == 0) {
      x++;
      y++;
    } else {
      if (x <= y) {
        x++;
      } else {
        y++;
      }
    }
  }
  if (x == y) {
    return true;
  } else {
    return false;
  }
}

// 主函数
int main() {
  string s;
  cin >> s;
  bool ans = solve(s);
  if (ans) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}
