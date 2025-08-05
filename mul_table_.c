// #include <stdio.h>

// int main (){
//     int table[10];

//     for (int i = 0; i <= 10; i++)
//     {
//         table[i]= i * 2;
//     }
//     for (int i = 0; i <= 10; i++)
//     {
//        printf("%d\n",table[i]);
//     }
    

    
//     return 0;
// }

#include <stdio.h>

int main (){
    int numbers[2][10];//2 rows 20 columns

    for (int i = 1; i <= 10; i++)
    {
        numbers[0][i]= 2 * i;//stores value of mul in 1 row 
    }

    for (int i = 1; i <= 10; i++)
    {
        printf("2 x %d = %d \n",i,numbers[0][i]);
    }

 printf("\n");

    for (int i = 0; i < 10; i++)
    {
        numbers[1][i]= 3* i;//stores value of mul in2 row
    }

    for (int i = 0; i < 10; i++)
    {
        printf("3 x %d = %d\n",i,numbers[1][i]);
    }
    
    return 0;
}