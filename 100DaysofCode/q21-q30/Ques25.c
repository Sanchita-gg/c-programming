#include <stdio.h>

int main()
 {
    int a, b;
    char operator;

    printf("Enter two numbers and an Operator (+, -, *, /, %): ");
    scanf("%d %d %c", &a, &b, &operator);

    switch (operator)
     {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;
        case '%':
            if (b != 0)
                printf("%d\n", a % b);
            else
                printf("Error: Modulo by zero\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}