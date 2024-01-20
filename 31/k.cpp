#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, i, j, n;
    scanf("%d", &n);
    int* a = (int*)malloc((n + 1) * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for (i = 0; i < n; i++)
        if (a[i] > m)
            break;

    for (j = n; j > i; j--)
        a[j] = a[j - 1];

    a[i] = m;

    for (i = 0; i < n + 1; i++)
        printf("%d\t", a[i]);

    free(a);
    a = NULL;

    return 0;
}
