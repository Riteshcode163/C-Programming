#include <stdio.h>

int main()
{
    int n = 3;
    int i = 2;
    int prime = 0; // Assume n is prime

    if (n == 1 || n == 0)
    {
        prime = 1;
    }

    do{

        
       
    
        if (n % i == 0 && n!=2)
        {
            prime = 1; // n is not prime
            break;
        }
        i++;
    }while(i<n);

    if (prime == 1)
    {
        printf("%d is not prime\n", n);
    }
    else
    {
        printf("%d is  prime\n", n);
    }

    return 0;
}
