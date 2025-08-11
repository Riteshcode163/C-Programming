#include <stdio.h>
// print adress of variable and print value of that variable through adress 
int main (){
    int i = 65;
    int* j = &i;
    printf("the adress of this variable is %p\n",j);
    printf("the value on this address is %d\n",*j);
    return 0;
}


