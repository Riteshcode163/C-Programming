#include <stdio.h>

int main (){
    int i =65;
    int*j =&i;
    int**k =&j;

    printf("the adress of i is %p\n",j);
    printf("the adress of j is %p\n",k);
    printf("the value of j is %d\n",*j);
    printf("the value of k is %d",*k);
    return 0;
}