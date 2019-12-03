#include <stdio.h>

int main (void) {
    int a[5] = { 1, 2, 3, 4, 5 };
    int b[5] = { 0 };

    for (int i=0; i<5; i++)
        printf("%d\t", a[i]);

    printf("\n");

    for (int i=0; i<5; i++)
        printf("%d\t", b[i]);
    printf("\n");

    for (int i=0; i<5; i++)
        b[i] = a[i];

    for (int i=0; i<5; i++)
        printf("%d\t", b[i]);

    printf("\n");

    return 0;
}
