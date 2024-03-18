#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

int n;

int main() {
    while (cin >> n) {
        double sum_t = 0, w = 0;
        priority_queue<pair<long long, long long> > q;
        for (int i = 1; i <= n; i++) {
            int tmp;
            scanf("%d", &tmp);
            q.push(make_pair(-tmp, -i));
        }
        for (int i = 1; i <= n; i++) {
            int num = -q.top().second;
            int t = -q.top().first;
            q.pop();
            printf("%d ", num);
            sum_t += t;
            w += sum_t;  // 等待时间
        }

        // printf("\n%lf",sum_t);
        printf("\n%.2lf\n", (double)w / n);
    }

    return 0;
}