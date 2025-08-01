#include <stdio.h>
int sum (int  , int );

int sum (int x,int y){
    printf("give the first number\n");
    scanf("%d",&x);
    printf("give the second number\n");
    scanf("%d",&y);
    printf("the sum of these numbers is %d",x+y);
}

int main (){

    sum();
}

