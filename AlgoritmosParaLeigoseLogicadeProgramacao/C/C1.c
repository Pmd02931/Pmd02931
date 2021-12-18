///Make an algorithm that loads a vector of 5 elements and then stores in a vector only the even numbers greater than 0. In the endit should show the vector elements on the screen///
#include <stdio.h>
int main()
{
    int vector[5], pairs[5], cont_p = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a value(%d/5): ", i + 1);
        scanf("%d", &vector[i]);
        if (vector[i] > 0 && vector[i] % 2 == 0)
        {
            pairs[cont_p] = vector[i];
            cont_p++;
        }
    }
    for (int i = 0; i < cont_p; i++)
    {
        printf("%d\n", pairs[i]);
    }
}