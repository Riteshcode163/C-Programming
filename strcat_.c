#include <stdio.h>
#include <string.h>


int main (){
    char str1[100]="ritesh ";//it joins second string with first string we need enugh space to store it thats why first string i initialized to 100
    char str2[]="patil";
    strcat(str1,str2);
    puts(str1);
    return 0;
}