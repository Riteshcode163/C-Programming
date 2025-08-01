#include <stdio.h>





float average (int  a, int  b, int  c);//function prot

float average ( int  a ,int  b, int  c){
   float avg=(a+b+c)/3.0;
   printf(" the average of this is %f\n",avg);
   return avg;
}



int main (){
   
   float answer= average(3,6,5);
   printf("%f",answer) ;  
    return 0;
}