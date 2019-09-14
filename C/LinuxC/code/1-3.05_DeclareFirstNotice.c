// Try to declare first notice

#include <stdio.h>


void threeline(void); // if not declare first, order must be right
// void threeline(); // it is ok, but complier will not check parameter

void newline(void);



int main (void){
    printf("First Line.\n");

    threeline();

    printf("Second Line.\n");

    return 0;
}

void newline(void){
    printf("\n");

    int a;
    double b;

    a = a + b;
}

void threeline(void){
    newline();

    newline();

    newline();
}
