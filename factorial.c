#include <stdio.h>

int main (){
    int factorial=1 ;
    int number;

    printf("give the number\n");
    scanf("%d",&number);

    for (int i = 1; i <= number; i++)
    {
        factorial*=i;
        
    }
    printf("the factoril of %d is %d",number , factorial);
    
    return 0;
}