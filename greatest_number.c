#include <stdio.h>

int main() {
    int numbers[7] = {2, 56, 78, 100, 23, 77, 65};
    int n = numbers[0];

    for (int i = 1; i < 7; i++) {  
        if (n < numbers[i]) {
            n = numbers[i];
        }
    }
    printf("The greatest number is %d\n", n);
    return 0;
}




/*
Iteration 1 (i = 1):

n is 2 and numbers[1] is 56.

Since 2 < 56, we update n to 56.

Iteration 2 (i = 2):

n is 56 and numbers[2] is 78.

Since 56 < 78, we update n to 78.

Iteration 3 (i = 3):

n is 78 and numbers[3] is 10.

Since 78 > 10, we do not update n.

Iteration 4 (i = 4):

n is 78 and numbers[4] is 23.

Since 78 > 23, we do not update n.

Iteration 5 (i = 5):

n is 78 and numbers[5] is 77.

Since 78 > 77, we do not update n.

Iteration 6 (i = 6):

n is 78 and numbers[6] is 65.

Since 78 > 65, we do not update n.




*/
