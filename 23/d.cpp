#include <iostream>
using namespace std;

struct Date {
	int year, month, day;
};

int dateCompare(const Date* dp1, const Date* dp2) {
	int t = dp1->year - dp2->year;
	if (t == 0) t = dp1->month - dp2->month; // (1)
	if (t == 0) t = dp1->day - dp2->day;
	return t;
}

void sort(Date* p, int n) { // (2)
	for (int i = 0; i < n - 1; i++) {
		int k = i;
		for (int j = i + 1; j < n; j++) // (3)
			if (dateCompare(&p[j], &p[k]) < 0) k = j;
		Date t = p[i]; p[i] = p[k]; p[k] = t; // (4)
	}
}

int main() {
	int n;
	cin >> n;
	Date* p = new Date[n]; // (5)
	for (int i = 0; i < n; i++)
		cin >> p[i].year >> p[i].month >> p[i].day;
	sort(p, n);
	for (int i = 0; i < n; i++)
		cout << p[i].year << "/" << p[i].month << "/" << p[i].day << endl;
	delete[] p;
}
