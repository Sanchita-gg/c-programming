#include <stdio.h>

int fact_recursive(int n) 
{
    if (n == 0)
        return 1;
    else
        return n * fact_recursive(n - 1);
}

int fact_non_recursive(int n)
 {
    int fact = 1;
    for (int i = 1; i <= n; i++) 
    {
        fact *= i;
    }
    return fact;
}

int binomial_recursive(int n, int r) 
{
    return fact_recursive(n) / (fact_recursive(r) * fact_recursive(n - r));
}

int binomial_non_recursive(int n, int r)
 {
    return fact_non_recursive(n) / (fact_non_recursive(r) * fact_non_recursive(n - r));
}

int main() {
    int n, r;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! r must be <= n and both >= 0.\n");
        return 0;
    }

    printf("\nResults in Tabular Form:\n");
    printf("------------------------------------------------------------\n");
    printf("   n   |   r   |  C(n,r) Recursive |  C(n,r) Non-Recursive\n");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i <= n; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            printf("   %2d  |  %2d  |       %8d    |       %8d\n",  i, j, binomial_recursive(i, j), binomial_non_recursive(i, j));
        }
    }
    printf("------------------------------------------------------------\n");

    return 0;
}
