#include <stdio.h>

// WE CAN WRITE POINER LIKE THIS 

// POINTER IS NOTHING BUT THE ADDRESS OF VARIABLE 


int main (){
    int i = 72;
    int* j = &i;   // j is pointer which  stores address of i
    printf("The address of this pointer is %p\n",&i);// this line prints the address of i
    printf("The address of this pointer is %p\n",j);// this line also does the same work output of both lines is same 

    // %u shows adress in integer


    printf("The address of this pointer is %u\n",j);

    // what we will do if qe want to know value from adress

    printf("The value of i from adress j is %d\n",*j);
     printf("The value of i from adress j is %d\n",*(&i));
    return 0;


}