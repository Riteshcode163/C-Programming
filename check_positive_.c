#include <stdio.h>

int main (){
    int numbers[]={1,2,4,-4,-8,-9,5,7};

    for (int i = 0; i < 8; i++)
    {
        if(numbers[i]<0){
            printf("NEGATIVE NUMBER\n");
        }
        else{
            printf("POSTIVE NUMBER\n");
        }
    }
    
    return 0;
}