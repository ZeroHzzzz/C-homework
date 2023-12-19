#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int n;
    cin >> n;

    double sum = 0.0, t = 0.0;

    for (i = 1; i <= n; i++)
    {
        t = 0.0;
        for (j = 1; j <= i; j++)
            t += j;
        sum += (1 / t);
    }

    cout << "sum=" << sum << endl;
    return 0;
}
