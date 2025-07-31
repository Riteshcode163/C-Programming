/*#include <stdio.h>

int main (){
    int n =3;
    int prime = 1;
    printf("let us see the code \n");
     
     if(n==1 || n==0){
        printf("%d is not prime", n);
     }
     while(n%n==0 ){
      prime==1;
     }
     if(prime=1){
        printf("%d is not  prime", n);
     }
     else{
        printf("%d is prime", n);
     }
    return 0;
    }*/




   #include <stdio.h>

int main() {
    int n = 3;
    int i = 2;
    int prime = 1;  // Assume n is prime

    printf("Let us see the code\n");

    if (n == 1 || n == 0) {
        printf("%d is not prime\n", n);
    } else {
        while (i <= n , n!=2 ) {
            if (n % i == 0) {
                prime = 0;  // n is not prime
                break;
                i++;
            }
            
        }
        if (prime == 1) {
            printf("%d is prime\n", n);
        } else {
            printf("%d is not prime\n", n);
        }
    }

    return 0;
}
