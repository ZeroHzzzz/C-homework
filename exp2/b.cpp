#include <iostream>
#include <vector>
using namespace std;
class node {
   private:
    int *arr, num;
    int maxn = -2e9;

   public:
    node(int* a, int s) {
        arr = a;
        num = s;
    }
    int max(int n, int m) { return n > m ? n : m; }
    int findMax() {
        for (int i = 0; i < num; i++) {
            maxn = max(arr[i], maxn);
        }
        return maxn;
    }
};
int main() {
    // int mp[10010];
    vector<int> mp;
    int tmp, ind = 0;
    while (cin >> tmp) {
        // mp[ind++] = tmp;
        mp.push_back(tmp);
    }
    node Arr(&mp[0], mp.end() - mp.begin());
    cout << Arr.findMax() << endl;
    return 0;
}