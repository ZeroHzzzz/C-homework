#include<iostream>
#include<iomanip>
using namespace std;

int fun(int** t, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += t[i][i];
    for (int i = 0; i < n; i++)
        sum += t[i][n - 1 - i];
    return sum;
}

int main()
{
    int n;
    cin >> n;

    int** a = new int*[n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(3) << a[i][j];
        cout << endl;
    }

    cout << "sum=" << fun(a, n) << endl;
    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;

    return 0;
}
