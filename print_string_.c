#include <stdio.h>

int main (){
    //char names[]={'r','c','m','s','i','\0'};
      char names[]="rcmsi";

    printf("MY FAMILY MEMBERS\n");
    for (int i = 0; i < 5; i++)
    {
     
        printf("%c\n",names[i]);
    }
    
    return 0;
}

                        /////////////both way to write string is same both wrorking\\\\\\\\\\/


// #include <stdio.h>

// int main (){
//     char names[]={'a','b','c','\0'};

//     printf("MY FAMILY MEMBERS\n");
//     for (int i = 0; i < 3; i++)
//     {
     
//         printf("%c\n",names[i]);
//     }
    
//     return 0;
// }