#include <stdio.h>

int main (){
    char operation;
    int num1, num2;

    printf("enter the first number\n");
    scanf("%d",&num1);

    printf("enter the second number\n");
    scanf("%d",&num2);

    printf("enter the operation you want to perform\n");
    scanf(" %c",&operation);


    if(operation =='+'){
        printf("THE SUM OF THESE NUMBERS IS %d",num1+num2);
    }
    else if(operation == '-'){
        printf("THE SUM OF THESE NUMBERS IS %d",num1-num2);
    }
    return 0;
}