#include <stdio.h>

int delNum(int *p, int n, int x) {
    int i, j;
    for (i = 0, j = 0; i < n; i++) {
        if (p[i] != x) {
            p[j++] = p[i];
        }
    }
    return j;
}

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &x);
    int newLength = delNum(arr, n, x);
    for (int i = 0; i < newLength; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
