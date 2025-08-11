#include <stdio.h>
//check whether the address in function and below iss  same  

// Function prototype
void same_address(int *a);

void same_address(int *a) {
    printf("The value of the variable is %d\n", *a);
    printf("The address of this variable is %p\n", a);  // Use %p for pointers
}

int main() {
    int i = 65;
    int* j = &i;
    printf("The value of this variable is %d\n", *j);
    printf("The address of this variable is %p\n", j);  // Use %p for pointers

    same_address(&i);  // Pass the address of i to the function
    return 0;
}
