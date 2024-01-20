#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int zs(int* b, int m, int maxv) {
    int* brr = new int[maxv + 1];
    memset(brr, 0, sizeof(int) * (maxv + 1));

    for (int i = 0; i < m; i++) {
        brr[b[i]]++;
    }

    int p = 0, q = 0;
    for (int i = 0; i <= maxv; i++)
        if (brr[i] > p) {
            p = brr[i];
            q = i;
        }
    
    delete[] brr;
    return q;
}

int main() {
    int arr[35];
    int a, maxv = 0, n = 0;
    while (cin >> a) {
        arr[n++] = a;
        maxv = max(a, maxv);
    }
    cout << zs(arr, n, maxv);
    return 0;
}