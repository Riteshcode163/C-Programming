#include <stdio.h>

int main (){
    //char names[]={'r','c','m','s','i','\0'};
      char names[]="rcmsi";// in this from c compiler automatically put \0

    printf(" MEMBERS\n");
    for (int i = 0; i < 5; i++)
    {
     
        printf("%c",names[i]);// you can print names like this
        
    }
    
    return 0;
}
