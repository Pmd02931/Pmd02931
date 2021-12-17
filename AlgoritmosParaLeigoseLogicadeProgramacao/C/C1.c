///Make an algorithm that loads a vector of 5 elements and then stores in a vector only the even numbers greater than 0. In the endit should show the vector elements on the screen///
#include <stdio.h>
int main()
{
    int vector[5], pairs[5], cont_p = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a value: ");
        scanf("%d", &vector[i]);
        if (vector[i] > 0)
        {
            pairs[cont_p] = vector[i];
            cont_p = cont_p++;
        }
    }
    for (int i = 0; i < cont_p; i++)
    {
        printf("%d\n", pares[i]);
    }
}