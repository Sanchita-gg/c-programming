#include <stdio.h>

int GCD(int num1, int num2)
 {
    if (num2 == 0)
        return num1;           
    else
        return GCD(num2, num1 % num2);  
}

int main()
 {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) 
    {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    printf("GCD of %d and %d is: %d\n", a, b, GCD(a, b));

    return 0;
}
