/*#include <stdio.h>

int main (){
   int i = 10;

   while (i<=30)

   {
      printf("the number is %d\n", i);               ****while loop****
     i*=3;
   }


    return 0;




}
   */

/*#include <stdio.h>

int main (){
   int i = 0;

   do
   {
     i++;
     printf("the value of i is %d\n", i);          ***do while loop****
   } while (i<10);

   return 0;
}
*/

/*#include <stdio.h>

int main (){
   for (int i = 1; i <= 10; i++)
   {
     printf("the value os i is %d\n", i);             ****for loop****
   }

   return 0;
}*/

/*
#include <stdio.h>

int main (){
  int n = 0;
  for (int i = 10; i >n ; i--)
  {
     printf("the value of i is %d\n", i);            ***decrement revrse order***
  }

  return 0;
}
*/

/*#include <stdio.h>

int main (){
   for (int i = 0; i < 10; i++)
   {

      if(i==5){
         continue;;
      }
     printf("the value of i is %d\n", i);

   }

   return 0;
}*/

/*
#include <stdio.h>

int main (){
   int n ;
   int sum = 0;



   printf("Give the value of n \n");
   scanf("%d", &n);

   for (int i = 1; i <=10; i++)
   {
     sum += (n*i);
   }
   printf("%d", sum);

   return 0;
}
*/

/*#include <stdio.h>

int main (){
   int i=1 ;
  int sum=0 ;


  printf("lets solve the problem");

  while ( i <= 10)
  {

    i++;

   sum += i;
   printf("%d", sum);

  }



   return 0;
}*/

/*#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    printf("Let's solve the problem\n");

    while (i <= 10) {

        sum +=i;
        i++;

    }
    printf("the sum is %d", sum);

    return 0;
}*/

/*#include <stdio.h>
 float average (float a, float b , float c);

 float average (float a, float b , float c){
    return (a+b+c)/3;
 }                                               *****average f number using function*****
int main (){

   int a = 3, b = 6, c = 5;
    printf("the average of a , b and c is %f", average(a,b,c));

    return 0;
}*/

// farenhite = celcius * 9/5 + 32

/*#include <stdio.h>
float farenhite(int temperature);

float farenhite(int temperature)
{
   return (temperature) * (9.0 / 5.0) + 32;
}
int main()
{
   printf("give the temperature\n");
   int temperature;
   scanf("%d", &temperature);

   printf("the farenhite temperature is %.2f", farenhite(temperature));
   return 0;
}
*/

/*#include <stdio.h>
int sum(int number);

int sum(int number)
{
   int i;
   int sum = 0;

   for (int i = 1; i <= number; i++)
   {
      sum += i;
   }
   return sum;
}

int main()
{
   int i = 1;
   int number = 5;
   printf("the sum  of first %d naturl number is %d", number, sum(number));

   return 0;
}*/

/*#include <stdio.h>
int fibonacci ( int number);

int fibonacci ( int number){

   int fibonacci;

  fibonacci = (number-1)+(number - 2);
  printf("%d", fibonacci);
}   return (fibonacci);

int main (){
int number;
int fibonacci;

   printf("give the number \n");
   scanf("%d", &number);

   for (int  i = 1; i < number; i+=2)
   {
     fibonacci = (number-1)+(number - 2);
      printf("%d", fibonacci);

   }

  if(fibonacci==1){
   printf("the value is 0");
  }
 else if(fibonacci==2){
   printf("the value is 1");
 }

   printf("the fibonacci number for %d is %d", number,fibonacci);

   return 0;
}*/

/*
#include <stdio.h>

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number, i;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &number);

    // Print the Fibonacci series
    printf("Fibonacci Series: ");
    for (i = 0; i < number; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
*/

/*#include <stdio.h>

int main() {
    int number;
    int first = 0, second = 1, next;

    printf("Enter the number: \n");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (number == 1) {
        printf("Fibonacci sequence: %d\n", first);
    } else if (number == 2) {
        printf("Fibonacci sequence: %d, %d\n", first, second);
    } else {
        printf("Fibonacci sequence: %d, %d", first, second);
        for (int i = 3; i <= number; i++) {
            next = first + second;  // Fibonacci calculation
            printf(", %d", next);
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}*/

#include <stdio.h>

int main()
{
   int number;
   int first = 0;
   int second = 1;

   printf("give the number\n");
   scanf("%d", &number);

   printf("%d %d", first, second);

   for (int i = 2; i <= number; i++)
   {
      int c = first + second;
      first = second;
      second = c;

      printf(" %d", c);
   }
   printf("\n");

   return 0;
}
