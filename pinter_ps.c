#include <stdio.h>

int main (){
    int a = 2;
    int* b = &a;
    printf("the value of b is %d\n",*b);
    printf("the va lue of pinter is %u\n",b);
       return 0;
}