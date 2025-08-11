#include <stdio.h>

int main (){
    int i = 65; // variable i
    int* j = &i; // pointer j which store address of i
    int** k = &j; // pointer k which store address of j which itself store value of i
    printf("the adress of i is %p\n",j);
     printf("the adress of j is %p\n",k);

     printf("the value of address j is %d\n",*(j));
     printf("the value of address k is %d\n",*(k));
     printf("the value of address k is %d\n",**(k));// it will print 65 because it will show the value of j 

    return 0;
}




//||||||||||||||||||||||||||||||||//   KEEP  GOING   \\ ||||||||||||||||||||||||||||||||||||||