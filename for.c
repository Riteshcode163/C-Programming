/*#include <stdio.h>

int main (){
    int i = 0;
    int product=1;
    int n;
     printf("give the value of n\n");
     scanf("%d", &n);

     while (i<=n)


     {i++;
       product*=i;
     }
     printf("%d", product);

    return 0;
}*/

/*#include <stdio.h>
 #include <stdlib.h>
  #include <time.h>
int main (){

    srand(time(0));
    int randomnumber;
    int guesses;
    int number;
    int noofguesses=0;

    randomnumber=rand()%50+1;

    printf("lets start game\n \n");


    printf("Guess the number\n");
    while(guesses!=randomnumber)
    {
       noofguesses++;
    scanf("%d", &guesses);

       if(guesses<randomnumber){
        printf("guess higher!");
       }

       else if(guesses>randomnumber){
        printf("guess lower!");
       }

       else if(guesses==randomnumber){
        printf("yay!! you guess correct");
       }
    }
    printf("you guess number in %d tries", noofguesses);

    return 0;
}*/

/*
#include <stdio.h>
// function prototype display what you want we want sum we wil  take 2 integer and returem integar
int sum (int , int);

// function definition
int sum (int a , int b){
printf("the sum is %d", a+b);
return a+b ;
}

int main (){




    sum(7,9);

    return 0;
}*/

/*
#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodevening();



void goodmorning(){
    printf("good morning\n");
} void goodafternoon(){
    printf("good afternoon \n ");
}void goodevening(){
    printf("good evening");
}
int main (){
    goodmorning();
    goodafternoon();
    goodevening();
    return 0;
}*/

#include <stdio.h>

int main()
{
    int product = 1;
    int n;
    printf("give the value on n\n");
    scanf("%d", &n);

    if (n == 1 || n == 0)
    {
        product = 1;
    }

    for (int i = 1; i <= n; i++)

    {

        product *= i;
    }
    printf("the factorial is %d", product);


    return 0;
}