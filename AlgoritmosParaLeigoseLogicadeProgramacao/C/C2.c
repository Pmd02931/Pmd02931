//Make an algorithm to calculate the average parts inventory.//
#include <stdio.h>
int main(){
    int mq, mm;
    printf("Enter the max value: ");
    scanf("%d", &mm);
    printf("Enter the min value: ");
    scanf("%d", &mq);
    printf("Average stock is: % .2f", (float)((mm+mq)/2));
}
