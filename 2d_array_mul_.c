#include <stdio.h>

int main (){
    int numbers[2][10];

   
   for (int i =  1; i < 10; i++)

   {
    numbers[i][i]=i*2;
    printf("%d\n",numbers[i]);
   }
   
    return 0;
}