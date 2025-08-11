#include <stdio.h>

int sum (int* , int* ); // it is pointer which will store adress of given value

int sum (int* a , int* b ){ // it will get value of x and y address because of *
    *a = 6;//it will change value of a
    return *a+*b;

}


int main (){
    int x = 3 ;
    int y = 5;

    printf("The sum of %d and %d is %d\n",x,y,sum(&x,&y));//it will get adress of x and y not value of xa nd y
    printf("the value of x is %d\n",x);
    
    return 0;
}



