#include <stdio.h>

int main() 
{
    int year;
    float population = 100000; 

    printf("Population growth in the last decade :\n");

    for (year = 1; year <= 10; year++)
     {
        population = population + population * 0,1;
        printf("Year %d: %.0f\n", year, population);
    }

    return 0;
}