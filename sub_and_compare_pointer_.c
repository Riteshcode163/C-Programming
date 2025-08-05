#include <stdio.h>

int main (){
    int age []= {17,18,19};
    int* ptr = &age[0];
    int* ptr1 = &age[1];

    printf("the adress of ptr  is %u\n",ptr);
     printf("the adress of ptr1  is %u\n",ptr1);
    printf(" ptr - ptr1 = %u \n",ptr-ptr1);
    
    return 0;
}