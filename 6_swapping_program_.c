#include <stdio.h>
void swapping(int* , int*);

void swapping (int*  apple , int* banana){
        int temporary;
        temporary = *apple ;
       *apple = *banana;///////////////these three lines will interchange the value 
       * banana = temporary;///////////////because they have adress of a and b thy can chnage value
        
     }

int main (){
    int a = 1;
    int b = 2;
    swapping(&a,&b);//it will take adress of a and b
    printf("the value of a is %d and b is %d",  a,b);


    return 0;
}