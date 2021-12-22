<<<<<<< HEAD
/*Section6Exer10.c
Develop an algorithm that, given the age of a swimmer, classify it into one of the following categories:

<--!Infant A
Infant B
Juvenil A
Juvenil B
Adult
*/
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 5 && age <= 7)
    {
        printf("Infant A");
    }
    if (age >= 8 && age <= 11)
    {
        printf("Infant B");
    }
    if (age >= 12 && age <= 13)
    {
        printf("Juvenile A");
    }
    if (age >= 14 && age <= 17)
    {
        printf("Juvenile B");
    }
    if (age >= 18)
    {
        printf("Adult");
    }
}
=======
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
>>>>>>> e7b8f86e59d4f3694f76217ef3aabc7b50bd7cf9
