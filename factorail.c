#include <stdio.h>

int main (){
    int product=1;
    for (int i = 1; i <= 4; i++)
    {
        product*=i;
        
    }
    printf("the value of factorail  is %d", product);
    return 0;
}