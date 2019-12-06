#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//#define N 10000
#define N 50
int a[N];

void myRandom (int uppernum) {
    int i;

    srand(time(NULL));

    for (i = 0; i < N; i++) 
        a[i] = rand() % uppernum;
}

int largest(int arr[], int n) {
    int i; 

    // Initialize maximum element 
    int max = arr[0]; 

    // Traverse array elements from second and 
    // compare every element with current max   
    for (i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 

    return max; 
}

int main (void) {

    int i, j, k, histogram[10] = { 0 }, max;
    myRandom(10);
    // number accumulator
    for (i = 0; i < N; i++)
        histogram[a[i]]++;
   
    // print header
    for (i = 0; i < 10; i++)
        printf("%d\t", i);
    printf("\n");
    
    max = largest(histogram, 10);

    // print figure
    for (j = 0; j < N; j++) {
        for (k = 0; k < 10; k++) {
            if (histogram[k] > 0) {
                printf("*\t");
                histogram[k]--;
            }
            else
                printf("\t");
        }
        if (j <= max)
            printf("\n");
        else{
            printf("\n");
            break;
        }
    }

    return 0;

}
