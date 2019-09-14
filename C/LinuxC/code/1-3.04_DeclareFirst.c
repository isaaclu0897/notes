// Try to declare first

#include <stdio.h>

void threeline(void); // if not declare first, order must be right

void newline(void);


int main (void){
    printf("First Line.\n");

    threeline();

    printf("Second Line.\n");

    return 0;
}

void newline(void){
    printf("\n");
}

void threeline(void){
    newline();

    newline();

    newline();
}

