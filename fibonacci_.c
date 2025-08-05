#include <stdio.h>

int main (){
    int number;
    int a = 0;
    int b = 1;

    printf("enter the numbers\n");
    scanf("%d",&number);

    int arr[number];

    printf("%d\n",0);
       printf("%d\n",1);

    for (int i = 1; i < number; i++)
    {
        int c;
        
       arr[i] =  a + b;
        a = b;
        b= arr[i];
        printf("%d\n",arr[i]);
   
    }
    
    printf("\n");

    
    
    return 0;
}