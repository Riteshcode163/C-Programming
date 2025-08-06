// #include <stdio.h>

// int main() {
//     char name[100];
//     fgets(name, 100, stdin);
//     puts(name);

//     int length = 0;
//     while (name[length] != '\0') {
//         length++;
//     }

//     // Printing the length of the string, excluding the newline character added by fgets
//     printf("Length of the string: %d\n", length - 1);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    fgets(name, 100, stdin);
    puts(name);

    int length = strlen(name);

    // If the last character is a newline, subtract 1 from the length
    if (name[length - 1] == '\n') {
        length--;
    }

    // Print the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}
