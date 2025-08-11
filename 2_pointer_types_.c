#include <stdio.h>

//we can make pointer for char  as well as float type

int main (){
    char i = 'A';
    char* z = &i;
    printf("The address of i is %p\n",z);


    // similary we can do it for float

    float r = 556.76;
    float* s = &r;
     printf("The address of i is %p\n",s);


    return 0;
}