#include <stdio.h>

#define N 5

int main (void) {
    int a[N] = { 1, 2, 3, 4, 5 };
    int b[N] = { 0 };

    for (int i=0; i<N; i++)
        printf("%d\t", a[i]);

    printf("\n");

    for (int i=0; i<N; i++)
        printf("%d\t", b[i]);
    printf("\n");

    for (int i=0; i<N; i++)
        b[i] = a[i];

    for (int i=0; i<N; i++)
        printf("%d\t", b[i]);

    printf("\n");

    return 0;
}
