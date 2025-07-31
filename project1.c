#include <stdio.h>

int main()
{
    int number;
    
    int i;
    printf("GUESS THE NUMBER GAME \n ");

    printf("give the number you have guessed \n");
    scanf("%d", &number);

    if(number==50){
            printf("Congralution!!! you won***");
        }
    
    else if(number>40 && number<50){
        printf("ohh!!  I think you may win");
    }
    else if (number < 50)
    {
        printf("the number is lower try again");
    }
    else if (number > 50)
    {
        {
            printf("the number is higher try again");
        }
        
         
    }

    return 0;
}