#include <stdio.h>
// ARRAY ALLOWS SINGLE ELEMENT TO STORE MULTIPLE VALUES

int main (){
    // IF WE HAVE TO STORE VALUE OF 90 STUDENTS WE CAN STORE IT INT ARRAY

int marks [90];//its means its reserve location for 90 integer in marks 0 to 89

marks[0]=45;
marks[1]=90;

printf("The marks of 0 is %d and marks of 1 is %d\n",marks[0],marks[1]);
    return 0;
}