#include<iostream>
#include<iomanip>
using namespace std;
int m, n, a[100];

void pr()
{
    cout << m << "=";
    for (int i = n; i >= 2; i--)
        cout << a[i] << "+";
    cout << a[1] << endl;
}

void fen(int x, int y)
{
    if (y == 1)
    {
        a[1] = x;
        pr();
    }
    else
    {
        for (int i = 1; i <= x - y + 1; i++)
        {
            a[y] = i;
            fen(x - i, y - 1);
        }
    }
}

int main()
{
    cin >> m >> n;
    fen(m, n);
    return 0;
}
