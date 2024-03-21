#include <iostream>
using namespace std;
class node {
   private:
    double length, width, height;

   public:
    node() { length = 0, width = 0, height = 0; }
    void set_data(double l, double w, double h) {
        length = l, width = w, height = h;
    }
    double v() { return length * width * height; }
};
int main() {
    node v[4];
    double l, w, h;
    for (int i = 1; i <= 3; i++) {
        cin >> l >> w >> h;
        v[i].set_data(l, w, h);
    }
    for (int i = 1; i <= 3; i++) {
        cout << v[i].v() << endl;
    }
    return 0;
}