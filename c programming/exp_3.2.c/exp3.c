#include <stdio.h>

int main() {
    int i, j, num;

    printf("Part (a):\n");
    num = 1;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    printf("\nPart (b):\n");
    for (i = 0; i < 5; i++) {
        num = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}