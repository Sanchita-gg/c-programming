#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'Z';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("The initial memory addresses stored in the pointers are as follows:\n");
    printf("The memory address stored in integer pointer p1 is: %p\n", p1);
    printf("The memory address stored in float pointer p2 is: %p\n", p2);
    printf("The memory address stored in character pointer p3 is: %p\n", p3);

    p1++;
    p2++;
    p3++;

    printf("\nAfter incrementing each pointer by one position:\n");
    printf("The new memory address stored in integer pointer p1 is: %p\n", p1);
    printf("The new memory address stored in float pointer p2 is: %p\n", p2);
    printf("The new memory address stored in character pointer p3 is: %p\n", p3);

    p1--;
    p2--;
    p3--;

    printf("\nAfter decrementing each pointer back to its original position:\n");
    printf("The memory address stored in integer pointer p1 is now: %p\n", p1);
    printf("The memory address stored in float pointer p2 is now: %p\n", p2);
    printf("The memory address stored in character pointer p3 is now: %p\n", p3);

    printf("\nThe values stored at the memory locations pointed to by each pointer are:\n");
    printf("The value pointed to by p1 (integer pointer) is: %d\n", *p1);
    printf("The value pointed to by p2 (float pointer) is: %.2f\n", *p2);
    printf("The value pointed to by p3 (character pointer) is: %c\n", *p3);

    return 0;
}
