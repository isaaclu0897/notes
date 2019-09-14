// Try to declare first notice

#include <stdio.h>

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
