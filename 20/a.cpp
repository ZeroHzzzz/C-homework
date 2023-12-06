#include<iostream>
using namespace std;

int m, n = 0;

bool ss(int a)
{
    bool flag = true;
    int k = 2;
    while (k <= a / 2 && flag)
    {
        if (a % k == 0)
            flag = false;
        else
            k++;
    }
    return flag;
}

int main()
{
    int k = 2;
    cin >> m;
    do
    {
        if (ss(k) && ss(k + 2))
        {
            n++;
            cout << k << ' ' << k + 2 << endl;
        }
        k++;
    } while (n != m);
    return 0;
}
