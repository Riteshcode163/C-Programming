/*#include <stdio.h>

int main (){
   int sum = 0;
   for (int i = 1; i <=10; i++)
   {
      sum+=i;
   }
   printf("the sum is %d", sum);
   
   return 0;
}*/


#include <stdio.h>

int main (){
    int i =0 ;
    int sum = 0;

    do
    {i++;
       sum+=i; 
    } while (i<10);
    printf("the sum is %d", sum);
    return 0;
}