#include <stdio.h>

int factorial(int n){
    if(n==0){
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

int main (){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int result = factorial(n);

    printf("factorial is %d",result);

    
    return 0;
}