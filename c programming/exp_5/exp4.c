#include <stdio.h>

int ISPRIME(int num) 
{
    if (num <= 1)
        return 0;  

    for (int i = 2; i <= num-1; i++)
     {
        if (num % i == 0)
            return 0;  
    }

    return 1;  
}

int main()
 {
    int lower, upper;

    printf("Enter the lower range: ");
    scanf("%d", &lower);

    printf("Enter the upper range: ");
    scanf("%d", &upper);

    if (lower > upper) {
        printf("Invalid range! Lower should be <= Upper.\n");
        return 0;
    }

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (int num = lower; num <= upper; num++)
    {
        if (ISPRIME(num))
        {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
