#include <stdio.h>

int main() {
    int celsius,fahrenheit;
    
    printf("enter temperature in celsius\n");
    scanf("%d" , &celsius);
   
   fahrenheit = (celsius*9/5)+32;
    printf("Temperature in fahrenheit is %d" ,fahrenheit);

    return 0;
}
