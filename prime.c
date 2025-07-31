#include <stdio.h>

int main()
{
    int n = 2;
    int prime = 0;

    for (int i = 2; i <= n; i++)
    {

       if (n==2){
            printf("2 is only the number which is prime and even");
            break;
        }
       
       else if (n % i == 0  )
        {
            printf("%d is not prime", n);
            break;
        }
        else if (n % i == 1 )
        {
            printf("%d is prime", n);
            break;
        }
    }
    return 0;
}