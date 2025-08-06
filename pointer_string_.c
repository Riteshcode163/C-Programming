#include <stdio.h>

int main (){
    char *can_change="hello world";//pointer stores chatracter pointer
    puts(can_change); ////prints pointer
    can_change="hello";//change pointer value
    puts(can_change);// prints change value

//                              ///// inshort using pointer in string  we can chnage it but using array we cannt changer
    return 0;
}