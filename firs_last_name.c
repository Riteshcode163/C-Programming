#include <stdio.h>

int main (){
    char fist_name[] = "RITESH";
    char last_name[] = "PATIL";

    for (int i = 0; fist_name[i] != '\0'; i++)//loop will exceed till null character\0 comes
    {
     printf("%c",fist_name[i]);
    }
 printf("\t");

for (int i = 0; last_name[i] != '\0'; i++)
    {
     printf("%c",last_name[i]);
    }

                               ///remind loop will always execute till null chaarcter doesnt came
                               

    
    return 0;
}