#include<bits/stdc++.h>
using namespace std;

int a[1000007];

void read(int &x)
{
    int f = 1;
    x = 0;
    char s = getchar();
    while (s < '0' || s > '9')
    {
        if (s == '-')
            f = -1;
        s = getchar();
    }
    while (s >= '0' && s <= '9'){
        x = x * 10 + s - '0';
        s = getchar();
    }
    x *= f;
}

int main()
{
    int ans = 0;
    int n;
    read(n);
    for (int i = 0; i < n; i++)
    {
        read(a[i]); 
        ans += a[i];
    }
    printf("%d\n", ans);
    return 0;
}
