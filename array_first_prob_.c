#include <stdio.h>
// know the value in array with the help of pointer
int main()
{
    int marks[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* ptr = &marks; // prints 0 number value in array 
    printf("the vaue at address %u is %d",ptr+2,*ptr+2);//shifts pointer to +2
    return 0;
    
    
}