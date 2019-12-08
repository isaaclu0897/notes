#include <stdio.h>

#define N 3
int a[N] = { 1, 2, 3 };
// #define arraySize(array) (sizeof(array)/sizeof(*array))

void print_array (void) {
    for (int i=0; i<N; i++)
        printf("%d  ", a[i]);
    printf("\n");
}

void swap (int x, int y) {
    int temp = 0;
    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void prem (int offset) {
    if (offset == N-1){
        print_array();
        return;
    }
    for (int i=offset; i<N; i++) {
        swap(i, offset);
        prem(offset + 1);
        swap(i, offset);
    } 
}


int main (void) {
    
    prem(0);

    return 0;
}
