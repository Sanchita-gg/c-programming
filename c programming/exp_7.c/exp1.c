#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Pointer p1 holds address: %p\n", p1);
    printf("Value pointed by p1: %d\n\n", *p1);

    printf("Pointer p2 holds address: %p\n", p2);
    printf("Value pointed by p2: %.2f\n\n", *p2);

    printf("Pointer p3 holds address: %p\n", p3);
    printf("Value pointed by p3: %c\n", *p3);

    return 0;
}
