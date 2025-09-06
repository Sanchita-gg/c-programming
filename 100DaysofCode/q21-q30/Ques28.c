#include <stdio.h>

int main()
 {
    int n , i , product ;
    product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1 ; i <= n ; i++) 
{
        if (i % 2 == 0)
 {   
         product = product * i;
        }
    }

    if (n < 2)
        printf("No even numbers in the range\n");
    else
        printf("Product = %d\n", product);

    return 0;
}