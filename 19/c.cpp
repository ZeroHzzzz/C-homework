#include<iostream>
using namespace std;

int IsDuichen(int num)
{
    int x = num, reverseNum = 0;
    while (x)
    {
        reverseNum = reverseNum * 10 + x % 10;
        x = x / 10;
    }
    if (reverseNum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n < 0)
            break;
        if (IsDuichen(n))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
