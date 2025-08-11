#include <stdio.h>

//print 10 of the value of variable'

int multiply(int*);

int multiply(int* a ){
    printf("the value of this variable is %d\n",*a);
    *a = *a * 10;
    printf("the product is %d",*a);


}


int main (){
    int i = 45;
    multiply(&i);
  
    return 0;
}