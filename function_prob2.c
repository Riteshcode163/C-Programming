#include <stdio.h>

int celcius ( int temperature);

int celcius ( int temperature){
    return (temperature * 9/5)+32;
}
    

int main (){

    

    
    float temperature = celcius(45);
    printf("%.2f",temperature);

    return 0;
}