#include <stdio.h>

int main()
 {
    int n , reverse , digit;
    reverse = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    while (n != 0)
     {        
        digit = n % 10;      
        reverse = reverse * 10 + digit;  
        n = n / 10;          
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}