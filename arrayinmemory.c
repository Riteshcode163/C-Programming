#include <stdio.h>

int main()
{
    int marks[] = {4, 2, 45, 7, 8};
    int *pointer = &marks[0];
    // int* pointer = marks same as  int* pointer = &marks[0];

    for (int i = 0; i < 4; i++)
    {
       printf("the value at  index %d is %d\n",i,marks[i]);
          printf("the value at  index %d is %d\n",i,*pointer);//at every iteration pointer points to next memory location
          pointer++;//pointer[0] to pointer[1] tp pointer[2]...like this
       

    }
    return 0;
}