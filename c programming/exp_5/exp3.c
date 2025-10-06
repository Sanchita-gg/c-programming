#include <stdio.h>

int fibonnaci(int num)
 {
    if (num == 0)
        return 0;        
    else if (num == 1)
        return 1;        
    else
        return fibonnaci(num - 1) + fibonnaci(num - 2); 
}

int main()
 {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("fibonnacinacci sequence up to %d terms:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonnaci(i));
    }

    printf("\n");

    return 0;
}
