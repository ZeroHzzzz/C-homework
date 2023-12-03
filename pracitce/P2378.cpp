#include <iostream>
#include<cmath>
using namespace std;
string a, c;
double b[10], x1, x2;
void work(double x) {
	if (x == 0) cout << "x";
	else {
		cout << "(x";
		if (x > 0) cout << "+" << x << ")";
		else cout << "-" << -x << ")";
	}
}
int main() {
	cin >> a;
	b[1] = 1;
	a.erase(0, 3);
	int pos = a.find('x');
	if (pos == -1) b[2] = 0;
	else {
		c = a.substr(0, pos + 1);
		c.erase(--c.end());
		if (c == "+") b[2] = 1;
		else if (c == "-") b[2] = -1;
		else b[2] = atof(c.c_str()); 
	}
	if (pos == -1) b[3] = atof(a.c_str());
	else if (pos == a.size()) b[3] = 0;
	else c = a.substr(pos + 1), b[3] = atof(c.c_str());
	x2 = (-b[2] + sqrt(b[2] * b[2] - 4 * b[1] * b[3])) / b[1] / 2;
	x1 = (-b[2] - sqrt(b[2] * b[2] - 4 * b[1] * b[3])) / b[1] / 2;
	if (x1 == x2) work(-x1), cout << "^2";
	else work(-x1), work(-x2);
}