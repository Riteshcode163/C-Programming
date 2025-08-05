#include <stdio.h>

int main() {
    int addhar[5];  // Array to store values
    int* pointer = addhar;  // Pointer initialized to point to the first element of the array
   
    // Loop to take input values
    for (int i = 0; i < 5; i++) {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &addhar[i]);  // Store user input in the array using pointer arithmetic
    }

    // Loop to print the values
    for (int i = 0; i < 5; i++) {
        printf("The value at index %d is %d\n", i, addhar[i]);  // Print values using pointer arithmetic
    }                                           //    or 
                                        //       *(pointer+i)

    return 0;
}
