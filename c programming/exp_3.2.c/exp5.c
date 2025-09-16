#include <stdio.h>

int main() {
    int a, b, c, d, L;
    int sum1, sum2;

    printf("Enter the limit (L): ");
    scanf("%d", &L);

    printf("Ramanujan numbers up to %d^3 are:\n", L);

    for (a = 1; a <= L; a++) 
    {
        for (b = 1; b <= L; b++)
         {
            sum1 = a*a*a + b*b*b;   

            for (c = 1; c <= L; c++) 
            {
                for (d = 1; d <= L; d++) {
                    sum2 = c*c*c + d*d*d;  

                    if (sum1 == sum2 && (a != c || b != d))
                     {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
