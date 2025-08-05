#include <stdio.h>

int main()
{
    int numbers[6]; // 0,1,2,3,4,5
    printf("enter the element\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("the reverse order is \n\n");
    for (int i = 5; i >= 0; i--)
    {
        printf("%d\t", numbers[i]);
    }
}1