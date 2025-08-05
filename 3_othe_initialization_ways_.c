#include <stdio.h>

int main (){
    int CGPA[]={2,3,4};// we can also store values in array like this

    for (int i = 0; i < 3; i++)
    {
        printf("give the marks for %d %d\n",i,&CGPA[i]);//first it prints i then it willse at cgpa[0]there is 2  
                                                /// thenit will print cgpa 
    }
    
    return 0;
}