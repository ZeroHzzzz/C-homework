#include <iostream>
using namespace std;

int myReverse(int val)
{
    int reversed = 0;
    while (val)
    {
        reversed = reversed * 10 + val % 10;
        val = val / 10;
    }
    return reversed;
}

int main()
{
    for (int n; cin >> n;)
    {
        cout << myReverse(n) << endl;
    }
    return 0;
}
