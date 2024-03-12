#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Student {
  char id[10];
  int score;
};

bool cmp(const Student& a, const Student& b) {
  if (a.score == b.score) {
    return a.id < b.id;
  } else {
    return a.score > b.score;
  }
}

int main() {
  int n;
  cin >> n;
  vector<Student> students(n);
  for (int i = 0; i < n; i++) {
    cin >> students[i].id >> students[i].score;
    if(students[i].score > 1000) students[i].score = 1000;
  }

  sort(students.begin(), students.end(), cmp);

  for (int i = 0; i < n; i++) {
    cout << students[i].id << " " << students[i].score << endl;
  }

  return 0;
}
