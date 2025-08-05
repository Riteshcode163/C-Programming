#include <stdio.h>

int main()
{
    int numbers[10];
    for (int i = 0; i < 10; i++)
    {
        numbers[i] = 5 * (i + 1); // stores multiplication in array in every iteration
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the value of 5 x %d = %d\n", i + 1, numbers[i]);
    }

    return 0;
}