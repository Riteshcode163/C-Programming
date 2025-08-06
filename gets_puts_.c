#include <stdio.h>

int main (){
    char character[100];
   // gets(character);//TAKES STRING INPUT
  
   // puts(character);// PRINTS THE STRING

    fgets(character , 100 , stdin);// this alao another way to print string it takes string input use this is safe
     puts(character);
    return 0;
}