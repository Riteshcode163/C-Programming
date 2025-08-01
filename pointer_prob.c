#include <stdio.h>

void  change_mul (int*);

void  change_mul (int* a){
    *a = *a * 30;
    printf("the value of a is %p\n",&a);
    printf("%d",*a);

}




int main (){
    int x = 45;
    change_mul(&x);
    return 0;
}