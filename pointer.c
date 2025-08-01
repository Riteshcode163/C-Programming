#include <stdio.h>

int main (){
    int i = 72;
    int* j =&i;
    int h=7987;
    int g=865;
    int k =6;     //for integer 

    printf("the adddress of i is %p\n",&i);
    printf("the adddress of h is %p\n",&h);
    printf("the adddress of g is %p\n",&g);
    printf("the adddress of kis %p\n",&k);


    char z ='A';
    printf("the adress of z is %p\n",&z); // for character
    printf("the value oa pointer z is %d\n",*(&z));

    float r=87.88;
    printf("the address of r is %p\n",&r);
    printf("and the value at adress of r is %d\n",*(&r));

    

    
    return 0;
}