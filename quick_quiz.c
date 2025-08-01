#include <stdio.h>

void GOOD_MORNING();
void GOOD_AFTERNOON();
void GOOD_EVENING();


void GOOD_MORNING(){
    printf("GOOD MORNING\n");
}

void GOOD_AFTERNOON(){
    printf("GOOD AFTERNOON\n");
}

void GOOD_EVENING(){
    printf("GOOD EVENING\n");
}

int main (){

    GOOD_MORNING();
    GOOD_AFTERNOON();
    GOOD_EVENING();
    return 0;
}