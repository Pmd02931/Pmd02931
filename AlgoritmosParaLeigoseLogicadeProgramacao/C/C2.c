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