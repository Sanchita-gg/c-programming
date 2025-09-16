#include <stdio.h>
int main()
{
    int num , i , result;
    printf("enter a number: \n");
    scanf("%d" , &num);

    printf("multiplication table of %d is\n", num);

    for ( i = 1; i <= 10; i++)
    {
        result = num * i;
        printf("%d * %d = %d \n" , num , i , result);
    }
    return 0;
}