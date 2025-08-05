#include <stdio.h>




/*

                        POINTER ARITHEMATIC MEANS WHEN WE DO POINTER++ AR ANY OTHER
                        IT SHIFTS ITS ADDRESS AS THE INT CHAR OR FLOAT NEDDS BYTES IN THAT ARCHITEXTURE


*/

int main (){

             // pointer arithematic using integer
    // int i = 5;
    // int* pointer=&i;
    // printf("the address of i is %u\n",pointer);
    // printf("the address of i is %u\n",&i);
    // pointer++;
    //  printf("the address of i is %u\n",pointer);// value changes it take 4 bits which are taken by 5 bcoz its is integer
    // return 0;                                     // bcoz integer takes 4 bits in ths architexture



    char i = '*';
    char* pointer=&i;

    printf("the address of character pointer i is %u\n",&i); 
     printf("the address of character pointer i is %u\n",pointer);
                 // character takes 1 bytes in this architexture
     pointer++;
      printf("the address of character pointer i is %u\n",pointer); 

      pointer--;
       printf("the address of character pointer i is %u\n",pointer);//shift backward in this pointer -- 
}

