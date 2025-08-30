/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main() 
{
    float a , b;   
    float sum , diff , product , quotient;

    printf("Enter first number :\n");
    scanf("%f", &a);
 
    printf("Enter first number :\n");
    scanf("%f", &a);

    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;

    printf("Sum = %.2f\n" , sum);
    printf("Difference = %.2f\n" , diff);
    printf("Product = %.2f\n" , product);
    printf("Quotient = %.2f\n" , quotient);

    return 0;
}