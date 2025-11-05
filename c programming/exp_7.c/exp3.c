#include <stdio.h>

void modifyValues(int *p1, float *p2, char *p3) {
    *p1 = *p1 + 5;
    *p2 = *p2 + 10;
    *p3 = 'A';
}

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'Z';

    printf("The values of the variables before calling the function are:\n");
    printf("The value of integer variable a is: %d\n", a);
    printf("The value of float variable b is: %.2f\n", b);
    printf("The value of character variable c is: %c\n", c);

    modifyValues(&a, &b, &c);

    printf("\nThe values of the variables after calling the function are:\n");
    printf("The modified value of integer variable a is: %d\n", a);
    printf("The modified value of float variable b is: %.2f\n", b);
    printf("The modified value of character variable c is: %c\n", c);

    return 0;
}
