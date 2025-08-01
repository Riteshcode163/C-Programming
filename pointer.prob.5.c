 #include <stdio.h>

 int sum (int* , int* );

int sum (int* a , int* b ){
    int c = *a + *b;
    int d = *a * *b / 2;
    printf("the answer of this question is %d %d",c,d);


}
 
 int main (){
    sum (*5 , *5);
    return 0;
 }