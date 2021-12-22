//Create a simple algorithm for calculate your age, according your birth year and present year//
#include <stdio.h>

main(){
    int an, aa;
    printf("When you were born?\n");
    scanf("%d", &an);
    printf("What year are we? \n");
    scanf("%d", &aa);
    printf("You have %d age.", aa - an);
}