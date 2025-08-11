#include <stdio.h>

// sum and average using function and pointer and find location address  


int sum_and_average(int*, int*);

int sum_and_average(int* a, int* b) {
    int sum = *a + *b;
    printf("The sum of these numbers is %d\n", sum);
    printf("the location address of sum is %u\n",&sum);

    float average = (*a + *b) / 2.0;
    printf("The average of these numbers is %f\n", average);
     printf("the location address of average is %u\n",&average);

    return 0; 
} 

int main() {
    int a = 4;
    int b = 6;

    sum_and_average(&a, &b);

    return 0;
}