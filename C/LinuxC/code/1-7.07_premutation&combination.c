#include <stdio.h>

// #define N 6

#define arraySize(array) (sizeof(array)/sizeof(*array))

void print_array (int *array, int arrayLength) {
    for (int i=0; i<arrayLength; i++)
        printf("%d  ", array[i]);
    printf("\n"); 
}


int main (void) {

    int a[] = { 1, 2, 3, 4, 5, 6 };
    
    int arrayLength = arraySize(a);
    
    print_array(a, arrayLength);

    return 0;
}
